#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "GameplayTagContainer.h"
#include "ECustomizationSlot.h"
#include "Templates/SubclassOf.h"
#include "SwCinematicCharacter.generated.h"

class UAnimInstance;
class URsActorSkeletalMeshComponent;
class URsCustomizationPiece;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASwCinematicCharacter : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FacialRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SpeakerTag;
    
public:
    ASwCinematicCharacter();
    UFUNCTION(BlueprintCallable)
    void SetFacialRig(USkeletalMeshComponent* NewFacialRig);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomization(URsCustomizationPiece* NewPiece);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimAttachCmp(USkeletalMeshComponent* NewRig, TSubclassOf<UAnimInstance> PostAttachAnimBPClass);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCustomizationFromSlot(TEnumAsByte<ECustomizationSlot::Type> Slot);
    
    UFUNCTION(BlueprintCallable)
    void RemoveCustomization(const URsCustomizationPiece* NewPiece);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAnimAttachCmp(USkeletalMeshComponent* RigToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsActorSkeletalMeshComponent* GetRsMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetFacialRig() const;
    
};

