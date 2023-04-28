#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeSaveData.generated.h"

USTRUCT(BlueprintType)
struct RSWORLDSTATEPLUGIN_API FRsWorldStateNodeSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsCompletedPersistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> NodeTypeSpecificData;
    
    FRsWorldStateNodeSaveData();
};

