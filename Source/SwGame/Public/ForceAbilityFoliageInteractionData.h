#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ForceAbilityFoliageInteractionData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FForceAbilityFoliageInteractionData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TriggersFoliageAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOneShotFoliageAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OneShotOverrideAudioEvent;
    
    SWGAME_API FForceAbilityFoliageInteractionData();
};

