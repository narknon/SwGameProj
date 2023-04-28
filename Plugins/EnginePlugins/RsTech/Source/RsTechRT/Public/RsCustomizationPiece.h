#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "CustomizationMaterialInfo.h"
#include "EAttachmentType.h"
#include "ECustomizationSlot.h"
#include "ECustomizationStreamingTier.h"
#include "RsOnCustomizationPieceLoadCompleteDelegateDelegate.h"
#include "RsCustomizationPiece.generated.h"

class UAkAudioEvent;
class UAnimInstance;
class UHavokClothAsset;
class USkeletalMesh;
class UTexture2D;

UCLASS(Blueprintable)
class URsCustomizationPiece : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CustomizationName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LoreText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> CustomizationRig;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<USkeletalMesh>> AlternativeRigs;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UHavokClothAsset> ClothAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEntityTransferMotionEnabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UHavokClothAsset>> AlternativeClothSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* CustomizationRigPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UHavokClothAsset* ClothAssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> AltRigPtrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UHavokClothAsset*> AltClothPtrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimBP;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> PostAttachAnimBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* AnimBPClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* PostAttachAnimBPClassPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> UITexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* UITexturePtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> UIAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* UIAudioEventPtr;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECustomizationSlot::Type> ParentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAttachmentType::Type> AttachmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationMaterialInfo> MaterialsSwatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TEnumAsByte<ECustomizationSlot::Type>> Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> AltMeshTags;
    
    URsCustomizationPiece();
    UFUNCTION(BlueprintCallable)
    void WaitUntilAsyncLoadComplete();
    
    UFUNCTION(BlueprintCallable)
    void UnloadAsyncAssets();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentMaterialSwatchIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void LoadAsyncAssets(ECustomizationStreamingTier Tier, const FRsOnCustomizationPieceLoadCompleteDelegate& OnLoadCompleteDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAsyncLoadComplete() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMaterialSwatchIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECustomizationStreamingTier GetAsyncLoadTier() const;
    
};

