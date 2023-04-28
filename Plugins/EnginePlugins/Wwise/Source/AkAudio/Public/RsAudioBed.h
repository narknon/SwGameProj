#pragma once
#include "CoreMinimal.h"
#include "RsAudioEmitter.h"
#include "RsAudioBed.generated.h"

UCLASS(Blueprintable)
class ARsAudioBed : public ARsAudioEmitter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerFalloffRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterFalloffRadius;
    
    ARsAudioBed();
};

