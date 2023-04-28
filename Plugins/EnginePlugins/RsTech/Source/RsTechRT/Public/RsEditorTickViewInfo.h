#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsShowFlagsWrapper.h"
#include "RsEditorTickViewInfo.generated.h"

USTRUCT(BlueprintType)
struct FRsEditorTickViewInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsShowFlagsWrapper ShowFlags;
    
    RSTECHRT_API FRsEditorTickViewInfo();
};

