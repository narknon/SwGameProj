#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERsConstrainedJumpDirection.h"
#include "ERsJumpState.h"
#include "RsConstrainedJumpWeights.h"
#include "RsHeroComponent.h"
#include "RsReactionParameters.h"
#include "RsWallJumpData.h"
#include "RsJumpComponent.generated.h"

class UAnimMontage;
class URsChimneyJumpDefinition;
class URsDoubleJumpDefinition;
class URsHeroStateModifierDefinition;
class URsJumpDefinition;
class URsJumpSettings;
class URsWallJumpDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsJumpComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsJumpSettings* JumpSettings;
    
    URsJumpComponent();
    UFUNCTION(BlueprintCallable)
    bool TryZTargetDoubleJumpWithJumpDefinition(URsDoubleJumpDefinition* JumpDefinition);
    
    UFUNCTION(BlueprintCallable)
    bool TryZTargetDoubleJump();
    
    UFUNCTION(BlueprintCallable)
    bool TryWallScurryJump();
    
    UFUNCTION(BlueprintCallable)
    bool TryWallJumpWithWallNormalAndSettings(const FVector& WallNormal, const FVector& ForwardAlongWall, const FRsWallJumpData& WallJumpSettings);
    
    UFUNCTION(BlueprintCallable)
    bool TryWallJumpWithWallNormalAndJumpDefinition(const FVector& WallNormal, const FVector& ForwardAlongWall, URsWallJumpDefinition* JumpDefinition);
    
    UFUNCTION(BlueprintCallable)
    bool TryWallJumpWithWallNormal(const FVector& WallNormal, const FVector& ForwardAlongWall);
    
    UFUNCTION(BlueprintCallable)
    bool TryWallJumpWithJumpDefinition(URsWallJumpDefinition* JumpDefinition);
    
    UFUNCTION(BlueprintCallable)
    bool TryWallJump();
    
    UFUNCTION(BlueprintCallable)
    bool TryJumpWithJumpDefinition(URsJumpDefinition* JumpDefinition, bool bStopMontages);
    
    UFUNCTION(BlueprintCallable)
    bool TryJumpInDirectionWithJumpDefinition(FVector4 JumpDirection, URsJumpDefinition* JumpDefinition, bool bStopMontages);
    
    UFUNCTION(BlueprintCallable)
    bool TryJumpInDirection(FVector4 JumpDirection, bool bStopMontages);
    
    UFUNCTION(BlueprintCallable)
    bool TryJump();
    
    UFUNCTION(BlueprintCallable)
    bool TryDoubleJumpWithJumpDefinition(URsDoubleJumpDefinition* JumpDefinition);
    
    UFUNCTION(BlueprintCallable)
    bool TryDoubleJump();
    
    UFUNCTION(BlueprintCallable)
    bool TryConstrainedJumpInDirection(ERsConstrainedJumpDirection JumpDirection, FMatrix JumpSpace, FVector CurrentMovementVelocity, UAnimMontage* JumpMontage, bool bInputWasMirrored);
    
    UFUNCTION(BlueprintCallable)
    bool TryConstrainedJump(const FRsConstrainedJumpWeights& jumpWeights, FMatrix JumpSpace, FVector CurrentMovementVelocity, UAnimMontage* JumpMontage, bool bInputWasMirrored);
    
    UFUNCTION(BlueprintCallable)
    bool TryConstrainedDoubleJump();
    
    UFUNCTION(BlueprintCallable)
    bool TryChimneyJumpWithSettings(const FVector& WallNormal, const FVector& ForwardAlongWall, const FVector& ChimneyCenterLocation, const FRsWallJumpData& WallJumpSettings);
    
    UFUNCTION(BlueprintCallable)
    bool TryChimneyJumpWithJumpDefinition(const FVector& WallNormal, const FVector& ForwardAlongWall, const FVector& ChimneyCenterLocation, URsChimneyJumpDefinition* JumpDefinition);
    
    UFUNCTION(BlueprintCallable)
    bool TryAngleLimitedDoubleJumpWithJumpDefinition(URsDoubleJumpDefinition* JumpDefinition, FVector JumpTargetDirection);
    
    UFUNCTION(BlueprintCallable)
    void StopJump();
    
    UFUNCTION(BlueprintCallable)
    void ResetDoubleJump();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpAscend();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpApex();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHitReaction(const FRsReactionParameters& ReactionParameters);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnConstrainedJumpFinished(URsHeroStateModifierDefinition* HeroStateModifier);
    
    UFUNCTION(BlueprintCallable)
    void JumpAscend();
    
    UFUNCTION(BlueprintCallable)
    void JumpApex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoingConstrainedJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWallNormalForCurrentWallJump() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector4 GetJumpControllerDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDefaultForwardVectorAlongWall(const FVector& WallNormal) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ERsJumpState> GetCurrentJumpState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanWallScurryJump() const;
    
};

