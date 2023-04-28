#pragma once
#include "CoreMinimal.h"
#include "GestureTriggeringParams.h"
#include "RsNarrativeConversationGestureTriggeringDefaults.generated.h"

class UAnimationAsset;

USTRUCT(BlueprintType)
struct DIALOGUEPLUGIN_API FRsNarrativeConversationGestureTriggeringDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimationAsset> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGestureTriggeringParams DefaultParams;
    
    FRsNarrativeConversationGestureTriggeringDefaults();
};

