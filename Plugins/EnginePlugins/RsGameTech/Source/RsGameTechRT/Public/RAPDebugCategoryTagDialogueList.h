#pragma once
#include "CoreMinimal.h"
#include "RAPDebugCategoryTagDialogueList.generated.h"

class UDialogue;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRAPDebugCategoryTagDialogueList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UDialogue>> Dialogues;
    
    FRAPDebugCategoryTagDialogueList();
};

