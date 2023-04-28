#pragma once
#include "CoreMinimal.h"
#include "RsAISimpleSpawnerInstance.h"
#include "RsAISpawnerDataOwnerBase.h"
#include "RsAISpawnerDataOwner.generated.h"

UCLASS(Blueprintable)
class ARsAISpawnerDataOwner : public ARsAISpawnerDataOwnerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FRsAISimpleSpawnerInstance> SimpleSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasConvertedSpawnerInstancesToActors: 1;
    
public:
    ARsAISpawnerDataOwner();
};

