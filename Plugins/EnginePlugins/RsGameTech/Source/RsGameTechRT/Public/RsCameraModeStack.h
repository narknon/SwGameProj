#pragma once
#include "CoreMinimal.h"
#include "RsCameraModeStackItem.h"
#include "RsCameraModeStack.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsCameraModeStack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsCameraModeStackItem> Stack;
    
public:
    FRsCameraModeStack();
};

