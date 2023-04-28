#pragma once
#include "CoreMinimal.h"
#include "ERsAIScriptingMode.h"
#include "RsAIScriptingOptions.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIScriptingOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIScriptingMode::Type> ScriptingMode;
    
    FRsAIScriptingOptions();
};

