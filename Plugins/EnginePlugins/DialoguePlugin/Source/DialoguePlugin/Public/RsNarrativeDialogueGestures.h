#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsNarrativeDialogueGesturesAndIdles.h"
#include "RsNarrativeDialogueGestures.generated.h"

UCLASS(Blueprintable)
class URsNarrativeDialogueGestures : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FRsNarrativeDialogueGesturesAndIdles> DialogueIDsToGestureLists;
    
    URsNarrativeDialogueGestures();
};

