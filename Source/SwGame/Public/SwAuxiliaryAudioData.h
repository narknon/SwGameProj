#pragma once
#include "CoreMinimal.h"
#include "SwBitfield_AuxiliaryAbilityState.h"
#include "SwAuxiliaryAudioData.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSwAuxiliaryAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwBitfield_AuxiliaryAbilityState ValidAbilityStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    SWGAME_API FSwAuxiliaryAudioData();
};

