#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SwEarlyReverbTraceObject.generated.h"

UCLASS(Blueprintable)
class USwEarlyReverbTraceObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompressionDecimal;
    
    USwEarlyReverbTraceObject();
};

