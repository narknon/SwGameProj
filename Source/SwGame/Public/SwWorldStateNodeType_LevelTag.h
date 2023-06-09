#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsWorldStateNodeType.h"
#include "SwWorldStateNodeType_LevelTag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SWGAME_API USwWorldStateNodeType_LevelTag : public URsWorldStateNodeType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    USwWorldStateNodeType_LevelTag();
};

