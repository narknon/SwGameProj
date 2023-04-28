#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SubtitleCue -FallbackName=SubtitleCue
#include "SubtitleCueDS.generated.h"

USTRUCT(BlueprintType)
struct FSubtitleCueDS : public FSubtitleCue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSpecialEndCue;
    
    AKAUDIO_API FSubtitleCueDS();
};

