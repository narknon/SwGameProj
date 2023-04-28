#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SwAIFightSystem.generated.h"

class AActor;
class USwAIPredatorPreyDirector;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Transient, Config=Game)
class SWGAME_API USwAIFightSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwAIPredatorPreyDirector* PredatorPreyDirector;
    
public:
    USwAIFightSystem();
private:
    UFUNCTION(BlueprintCallable)
    void OnVictimDied(AActor* DeadActor);
    
    UFUNCTION(BlueprintCallable)
    void OnVictimDestroyed(AActor* DestroyedActor);
    
};

