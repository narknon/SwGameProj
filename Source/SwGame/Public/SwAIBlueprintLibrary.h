#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERsCharacterType.h"
#include "SwAIBlueprintLibrary.generated.h"

class AActor;
class ARsAICharacter;
class ARsCharacter;
class ASwAICharacter;
class ASwAIController;

UCLASS(Blueprintable)
class USwAIBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwAIBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ASwAIController* GetSwAIController(AActor* ControlledActor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ARsAICharacter*> GetAttackingAIForActor(ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<ASwAICharacter*> FindAICombatAwarenessGroup(ASwAIController* AIController, TEnumAsByte<ERsCharacterType> CharacterType, float Radius);
    
};

