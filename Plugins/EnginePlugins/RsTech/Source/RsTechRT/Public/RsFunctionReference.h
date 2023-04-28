#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsFunctionReference.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct RSTECHRT_API FRsFunctionReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* FunctionSignature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* FunctionWithReturnAsRefSignature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid FunctionGuid;
    
    FRsFunctionReference();
};

