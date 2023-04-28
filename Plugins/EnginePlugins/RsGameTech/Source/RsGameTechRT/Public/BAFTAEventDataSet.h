#pragma once
#include "CoreMinimal.h"
#include "BAFTATagListToDialogue.h"
#include "BAFTAEventDataSet.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FBAFTAEventDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBAFTATagListToDialogue> TagListsToDialogues;
    
    FBAFTAEventDataSet();
};

