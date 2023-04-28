#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ERsHolomapMode.h"
#include "RsCollectableAcquiredDelegateDelegate.h"
#include "RsWorldMapHologramBase.generated.h"

class APlayerController;
class UDataAsset;

UCLASS(Blueprintable)
class ARsWorldMapHologramBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCollectableAcquiredDelegate CollectableAcquiredDelegate;
    
    ARsWorldMapHologramBase();
    UFUNCTION(BlueprintCallable)
    void UpdateMapLocation(const FVector& InLocation, const FRotator& InRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector TransformWorldPositionToMapPosition(const FVector& InPositionWorldSpace) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector TransformMapPositionToWorldPosition(const FVector& InPositionMapSpace) const;
    
    UFUNCTION(BlueprintCallable)
    void ToggleVisibility(bool bVisibile);
    
    UFUNCTION(BlueprintCallable)
    void SetHolomapMode(ERsHolomapMode InHolomapMode);
    
    UFUNCTION(BlueprintCallable)
    void SetHolomapCenterLocation(const FVector& InHolomapCenter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ProjectWorldMapToScreen(APlayerController* Player, const FVector& WorldPosition, FVector2D& ScreenPosition, bool bPlayerViewportRelative) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorldMapOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataAsset* GetRuntimeSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRelativePlanetScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHolomapYawRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHolomapScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsHolomapMode GetHolomapMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHolomapCoordiantes() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetHolomapCenterLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetActiveInteriorLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableLockStepTranslationMode(bool bEnabled);
    
};

