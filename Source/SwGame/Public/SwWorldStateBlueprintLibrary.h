#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "RsWorldStateNodeRef.h"
#include "SwWorldStateNodeRef_LevelTag.h"
#include "SwWorldStateBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class USwWorldStateBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwWorldStateBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetTag_WorldStateNodeLevelTag(const FSwWorldStateNodeRef_LevelTag& WorldStateNode);
    
    UFUNCTION(BlueprintCallable)
    static FSwWorldStateNodeRef_LevelTag CastTo_WorldStateNodeLevelTag(const FRsWorldStateNodeRef& WorldStateNode, bool& bIsValid);
    
};

