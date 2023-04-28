#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwDestructionTestsComponent.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwDestructionTestsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimationToPlay01;
    
    USwDestructionTestsComponent();
    UFUNCTION(BlueprintCallable)
    void ExecuteDestructionTestScenario02_PhysicsAsset(FName ActorNamePrefix, float DelayBeforeStartingPhysics);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteDestructionTestScenario01_APEXDestruction(FName ActorNamePrefix, float BaseDamage, float DamageRadius, float ImpulseStrength, bool bFullDamage);
    
};

