#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwLiftSlamActor.generated.h"

class URsAbilityEffectVictimComponent;

UCLASS(Blueprintable)
class SWGAME_API ASwLiftSlamActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsAbilityEffectVictimComponent* VictimComponent;
    
    ASwLiftSlamActor();
};

