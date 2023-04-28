#pragma once
#include "CoreMinimal.h"
#include "AkAudioObstructionData.generated.h"

USTRUCT(BlueprintType)
struct FAkAudioObstructionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Obstruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Occlusion;
    
    AKAUDIO_API FAkAudioObstructionData();
};

