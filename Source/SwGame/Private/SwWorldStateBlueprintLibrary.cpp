#include "SwWorldStateBlueprintLibrary.h"

FGameplayTag USwWorldStateBlueprintLibrary::GetTag_WorldStateNodeLevelTag(const FSwWorldStateNodeRef_LevelTag& WorldStateNode) {
    return FGameplayTag{};
}

FSwWorldStateNodeRef_LevelTag USwWorldStateBlueprintLibrary::CastTo_WorldStateNodeLevelTag(const FRsWorldStateNodeRef& WorldStateNode, bool& bIsValid) {
    return FSwWorldStateNodeRef_LevelTag{};
}

USwWorldStateBlueprintLibrary::USwWorldStateBlueprintLibrary() {
}

