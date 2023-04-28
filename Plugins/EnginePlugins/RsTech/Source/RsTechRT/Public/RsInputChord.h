#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "RsInputChord.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsInputChord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCtrl: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShift: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlt: 1;
    
    FRsInputChord();
};

