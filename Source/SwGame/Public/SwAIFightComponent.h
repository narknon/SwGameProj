#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERsDifficulty.h"
#include "SwAIFightComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwAIFightComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USwAIFightComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnOwnerRevived(AActor* RevivedActor);
    
    UFUNCTION(BlueprintCallable)
    void OnDifficultyChanged(ERsDifficulty PreviousDifficulty, ERsDifficulty NewDifficulty);
    
};

