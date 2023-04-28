#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InterpTrackInst -FallbackName=InterpTrackInst
#include "InterpTrackInstAkAudioRTPC.generated.h"

UCLASS(Blueprintable)
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdatePosition;
    
    UInterpTrackInstAkAudioRTPC();
};

