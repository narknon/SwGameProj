#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ERsAIAwarenessState.h"
#include "SwAIPredatorPreyDirector.generated.h"

class AActor;
class AController;
class ARsAIController;
class UDamageType;

UCLASS(Blueprintable, Transient)
class SWGAME_API USwAIPredatorPreyDirector : public UObject {
    GENERATED_BODY()
public:
    USwAIPredatorPreyDirector();
private:
    UFUNCTION(BlueprintCallable)
    void OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnAwarenessStateChanged(ARsAIController* AIController, TEnumAsByte<ERsAIAwarenessState::Type> PreviousAwarenessState, TEnumAsByte<ERsAIAwarenessState::Type> NewAwarenessState);
    
};

