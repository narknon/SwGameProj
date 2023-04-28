#pragma once
#include "CoreMinimal.h"
#include "RsFallDeathComponent.h"
#include "SwHeroFallDeathComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwHeroFallDeathComponent : public URsFallDeathComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallWarningDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepFallWarningDuringPreDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepFallWarningDuringNullNavState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceClearContactZForCinematicState;
    
public:
    USwHeroFallDeathComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateFallWarning(float WarningIntensity);
    
public:
    UFUNCTION(BlueprintCallable)
    void IgnoreFallDeath();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndFallWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginFallWarning();
    
};

