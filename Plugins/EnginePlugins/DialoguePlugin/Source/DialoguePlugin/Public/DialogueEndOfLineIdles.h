#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DialogueEndOfLineIdles.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct DIALOGUEPLUGIN_API FDialogueEndOfLineIdles {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> PossibleIdles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSoftObjectPtr<UAnimationAsset>> PossibleIdleAssets;
    
    FDialogueEndOfLineIdles();
};

