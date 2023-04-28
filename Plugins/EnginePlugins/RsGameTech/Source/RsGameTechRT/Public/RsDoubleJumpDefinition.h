#pragma once
#include "CoreMinimal.h"
#include "RsJumpData.h"
#include "RsJumpDefinition.h"
#include "RsDoubleJumpDefinition.generated.h"

class ARsHero;
class URsHeroStateModifierDefinition;
class URsJumpComponent;

UCLASS(Blueprintable)
class URsDoubleJumpDefinition : public URsJumpDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsJumpData DoubleJumpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsJumpData DoubleJumpZTargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalSpeedAdditiveThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditiveVerticalImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* DoubleJumpModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* DoubleJumpZTargetModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* AngleLimitActiveModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleLimitThresholdTowardsFacingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleLimitThresholdAwayFromFacingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleLimitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawAngleLimitDebug;
    
    URsDoubleJumpDefinition();
    UFUNCTION(BlueprintCallable)
    void SetIsZTargetDoubleJump(bool bInIsZTargetDoubleJump);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateJump(ARsHero* Hero, URsJumpComponent* JumpComponent, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJumpAscend(ARsHero* Hero, URsJumpComponent* JumpComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJumpApex(ARsHero* Hero, URsJumpComponent* JumpComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndJump(ARsHero* Hero, URsJumpComponent* JumpComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginJump(ARsHero* Hero, URsJumpComponent* JumpComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsZTargetDoubleJump() const;
    
};

