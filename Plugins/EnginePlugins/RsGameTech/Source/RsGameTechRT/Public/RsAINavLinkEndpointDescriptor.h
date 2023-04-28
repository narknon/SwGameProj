#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsAINavLinkEndpointDescriptor.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAINavLinkEndpointDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NavDataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NavDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightTangent;
    
    FRsAINavLinkEndpointDescriptor();
};

