#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsNarrativeGestureList.h"
#include "RsNarrativeDialogueGesturesAndIdles.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUEPLUGIN_API FRsNarrativeDialogueGesturesAndIdles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FRsNarrativeGestureList> UIDsToGesturesAndIdles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ModifiedTimestamp;
    
    FRsNarrativeDialogueGesturesAndIdles();
};

