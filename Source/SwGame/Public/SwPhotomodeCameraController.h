#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/PlayerController.h"
#include "EPhotoModeTweaks.h"
#include "PhotomodeFilter.h"
#include "SwPhotomodeComponentOverrideData.h"
#include "SwPhotomodeMeshOverrideData.h"
#include "Templates/SubclassOf.h"
#include "SwPhotomodeCameraController.generated.h"

class ARsCharacter;
class ASpectatorPawn;
class ASwPhotomodeCameraHUD;
class UMaterialInstanceDynamic;
class USkeletalMesh;
class USkeletalMeshComponent;
class USpotLightComponent;
class UStaticMeshComponent;
class UTexture;

UCLASS(Blueprintable)
class ASwPhotomodeCameraController : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* PhotoLightComponent1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* PhotoLightComponent2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* PhotoLightComponent3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FocalPlaneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpectatorPawn> SpectatorPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASwPhotomodeCameraHUD> HUDClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPhotomodeFilter> PhotomodeFilters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> BlacklistedCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CurrentFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FocalPlaneMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARsCharacter*> HideableAIList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<USkeletalMesh>, FSwPhotomodeMeshOverrideData> ForcedLODMeshes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<USkeletalMeshComponent>, FSwPhotomodeComponentOverrideData> ForcedLODComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> PostProcessTextureReferences;
    
    ASwPhotomodeCameraController();
    UFUNCTION(BlueprintCallable)
    void ToggleSpotlight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePhotomode();
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentlySelectedTweak(EPhotoModeTweaks NewSelectedTweak);
    
    UFUNCTION(BlueprintCallable)
    void SelectTweak(int32 I);
    
    UFUNCTION(BlueprintCallable)
    void ResetToDefault();
    
    UFUNCTION(BlueprintCallable)
    void RequestScreenshotPC(bool bShowSlateUI);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PhotomodeValueChanged(float Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PhotomodeToggleSpotlight(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeSetVignette(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeSetTilt(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeSetFOV(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeSetFilterIntensity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeSetFilter(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeSetFilmGrain(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeSetExposure(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeSetDOFFStop(float Value);
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeSetDOFDistance(float Value, bool bShowFocalPlane);
    
    UFUNCTION(BlueprintCallable)
    void PhotomodeSetChromaticAberation(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PhotomodeSelectionChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PhotomodePhotoTaken();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PhotomodeHideHUD(bool bHUDHidden);
    
    UFUNCTION(BlueprintCallable)
    float PhotomodeGetVignette();
    
    UFUNCTION(BlueprintCallable)
    float PhotomodeGetTilt();
    
    UFUNCTION(BlueprintCallable)
    float PhotomodeGetFOV();
    
    UFUNCTION(BlueprintCallable)
    float PhotomodeGetFilterIntensity();
    
    UFUNCTION(BlueprintCallable)
    int32 PhotomodeGetFilter();
    
    UFUNCTION(BlueprintCallable)
    float PhotomodeGetFilmGrain();
    
    UFUNCTION(BlueprintCallable)
    float PhotomodeGetExposure();
    
    UFUNCTION(BlueprintCallable)
    float PhotomodeGetDOFFStop();
    
    UFUNCTION(BlueprintCallable)
    float PhotomodeGetDOFDistance();
    
    UFUNCTION(BlueprintCallable)
    float PhotomodeGetChromaticAberation();
    
    UFUNCTION(BlueprintCallable)
    void ModifyTweakValue(float Delta);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpotlightVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected(EPhotoModeTweaks TweakID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuHidden() const;
    
    UFUNCTION(BlueprintCallable)
    void HidePhotomodeUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTextValue(EPhotoModeTweaks TweakID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSliderValue(EPhotoModeTweaks TweakID) const;
    
    UFUNCTION(BlueprintCallable)
    USpotLightComponent* GetPhotomodeLight(int32 Index);
    
};

