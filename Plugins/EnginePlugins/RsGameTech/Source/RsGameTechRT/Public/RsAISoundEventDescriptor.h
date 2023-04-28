#pragma once
#include "CoreMinimal.h"
#include "RsAISoundEventDescriptor.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAISoundEventDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundRange;
    
    FRsAISoundEventDescriptor();
};

