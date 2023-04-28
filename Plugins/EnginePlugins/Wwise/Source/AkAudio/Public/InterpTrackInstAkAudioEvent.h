#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InterpTrackInst -FallbackName=InterpTrackInst
#include "InterpTrackInstAkAudioEvent.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdatePosition;
    
    UInterpTrackInstAkAudioEvent();
};

