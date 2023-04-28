#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayTagContainer.h"
#include "CustomizationSlotEntry.h"
#include "EAttachmentType.h"
#include "ECustomizationSlot.h"
#include "PreExistingCustomizationComponent.h"
#include "RsCustomizationSlot.h"
#include "RsOnCustomizationSetDelegateDelegate.h"
#include "RsOnSetCustomizationsAsyncCompleteDelegateDelegate.h"
#include "RsActorSkeletalMeshComponent.generated.h"

class UAnimInstance;
class UHavokClothAsset;
class URsCustomizationPiece;
class USkeleton;
class USkinnedMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsActorSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* PostAnimAttachAnimInstance;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<ECustomizationSlot::Type>, FCustomizationSlotEntry> CustomizationSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> ExternalAltTags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<USkeleton>> CompatibleSkeletonList;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPreExistingCustomizationComponent> PreExistingComponentsForSlots;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URsCustomizationPiece*> DefaultCustomizations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsCustomizationPiece*> DefaultCustomizationsAssets;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsCustomizationPiece* BodyDefault;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsCustomizationPiece* FaceDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<ECustomizationSlot::Type>, USkeletalMeshComponent*> ExternalComponentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsCustomizationPiece*> PendingSetCustomizationPieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsCustomizationPiece*> AsyncCustomizationPieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> m_SkeletalMeshComponentsWaitingForPhysics;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnCustomizationSetDelegate OnCustomizationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FacialRig;
    
public:
    URsActorSkeletalMeshComponent();
protected:
    UFUNCTION(BlueprintCallable)
    bool ValidateForCompletion();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFacialRig(USkeletalMeshComponent* NewFacialRig);
    
    UFUNCTION(BlueprintCallable)
    void SetExternalToCustomizationSlot(USkeletalMeshComponent* MeshComponent, TEnumAsByte<ECustomizationSlot::Type> Slot);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizationsAsync(const TArray<URsCustomizationPiece*>& NewPieces, const FRsOnSetCustomizationsAsyncCompleteDelegate& OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomizationAsync(URsCustomizationPiece* NewPiece, const FRsOnSetCustomizationsAsyncCompleteDelegate& OnCompleteDelegate);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomization(const URsCustomizationPiece* NewPiece, bool bEnsureDefaultsAreInPlace);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimAttachCmp(USkinnedMeshComponent* ParentRig, USkeletalMeshComponent* NewRig, const UClass* PostAttachAnimInstanceClass, UHavokClothAsset* ClothAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetAndAttachExternalToCustomizationSlot(USkeletalMeshComponent* MeshComponent, TEnumAsByte<ECustomizationSlot::Type> Slot, TEnumAsByte<EAttachmentType::Type> AttachType, TEnumAsByte<ECustomizationSlot::Type> ParentSlot, FName AttachSocket);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveExternalAltMeshTag(FGameplayTag TagToRemove);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveAnimAttachCmp(USkeletalMeshComponent* RigToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAnimationPhysicsTickDependancy(USkeletalMeshComponent* Dependent);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllCustomiztion();
    
    UFUNCTION(BlueprintCallable)
    void K2_RemoveCustomizationFromSlot(TEnumAsByte<ECustomizationSlot::Type> Slot);
    
    UFUNCTION(BlueprintCallable)
    void K2_RemoveCustomization(const URsCustomizationPiece* NewPiece);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMeshInCustomizationSlot(TEnumAsByte<ECustomizationSlot::Type> Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFullInfoCustomizationSlot(TEnumAsByte<ECustomizationSlot::Type> Slot, FRsCustomizationSlot& Info) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCustomizationNameInSlot(TEnumAsByte<ECustomizationSlot::Type> Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRsCustomizationSlot> GetAllCustomizationSlots() const;
    
    UFUNCTION(BlueprintCallable)
    void EnsureCustomizationDefaults();
    
    UFUNCTION(BlueprintCallable)
    void EnsureAlternativeMeshes();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPossiblyHaveAltMeshes() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelSetCustomizationsAsync();
    
    UFUNCTION(BlueprintCallable)
    void ApplyMaterialSwatchByName(FName Name, TEnumAsByte<ECustomizationSlot::Type> Slot);
    
    UFUNCTION(BlueprintCallable)
    void ApplyMaterialSwatchByIndex(int32 SwatchIndex, TEnumAsByte<ECustomizationSlot::Type> Slot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddExternalAltMeshTag(FGameplayTag RequestedMeshTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAnimationPhysicsTickDependancy(USkeletalMeshComponent* Dependent, bool ForceAlwaysDependOnPhysicalAnimation);
    
};

