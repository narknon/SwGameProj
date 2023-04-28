#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeSyncHeroAutopilotParameters.h"
#include "SwSpeederBikeAutopilotData.generated.h"

USTRUCT(BlueprintType)
struct FSwSpeederBikeAutopilotData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSpeederBikeSyncHeroAutopilotParameters m_AutopilotParams;
    
    SWGAME_API FSwSpeederBikeAutopilotData();
};

