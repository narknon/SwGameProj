#pragma once
#include "CoreMinimal.h"
#include "RsAISpawnAnimationDef.generated.h"

class UAnimationAsset;
class URsAICharacterDefinition;

USTRUCT(BlueprintType)
struct FRsAISpawnAnimationDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsAICharacterDefinition* AICharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimationAsset*> SpawnAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWrapAnimation: 1;
    
    RSGAMETECHRT_API FRsAISpawnAnimationDef();
};

