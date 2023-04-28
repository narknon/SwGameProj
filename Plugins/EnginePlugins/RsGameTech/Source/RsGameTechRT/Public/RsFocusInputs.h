#pragma once
#include "CoreMinimal.h"
#include "RsFocusInputs.generated.h"

class AActor;
class URsCameraModeDefinition;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsFocusInputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FocusActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FocusSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCameraModeDefinition* ModeDefinition;
    
    FRsFocusInputs();
};

