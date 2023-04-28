#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "ERsFallDeathTrackingMode.h"
#include "ERsNavState.h"
#include "RsBitfield_NavState.h"
#include "RsFallDeathComponent.generated.h"

class AActor;
class ARsCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsFallDeathComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTrackingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsFallDeathTrackingMode TrackingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDeathDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverWaterFallDeathDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_NavState ContactTrackingNavStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_NavState FallTrackingNavStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOverWaterTrackingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERsNavState CurrentNavState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> CurrentMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastContactZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasValidContactZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsOverWater;
    
public:
    URsFallDeathComponent();
    UFUNCTION(BlueprintCallable)
    bool WillPassDeathDistance(FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackingEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetOverWaterTrackingEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLastContactZ(float ContactZ);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTeleported();
    
    UFUNCTION(BlueprintCallable)
    void OnNavStateChanged(ERsNavState NewState, ERsNavState PrevState);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void KillCharacter(ARsCharacter* CharacterToKill, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTrackingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOverWaterTrackingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLastContactZ(float& ContactZ) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearLastContactZ();
    
    UFUNCTION(BlueprintCallable)
    void ClearIsOverWater();
    
};

