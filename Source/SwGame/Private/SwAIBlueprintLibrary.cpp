#include "SwAIBlueprintLibrary.h"

ASwAIController* USwAIBlueprintLibrary::GetSwAIController(AActor* ControlledActor) {
    return NULL;
}

TArray<ARsAICharacter*> USwAIBlueprintLibrary::GetAttackingAIForActor(ARsCharacter* Character) {
    return TArray<ARsAICharacter*>();
}

TArray<ASwAICharacter*> USwAIBlueprintLibrary::FindAICombatAwarenessGroup(ASwAIController* AIController, TEnumAsByte<ERsCharacterType> CharacterType, float Radius) {
    return TArray<ASwAICharacter*>();
}

USwAIBlueprintLibrary::USwAIBlueprintLibrary() {
}

