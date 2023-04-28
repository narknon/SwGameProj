#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsMountInfo.generated.h"

class ARsAICharacter;

USTRUCT(BlueprintType)
struct FRsMountInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARsAICharacter> Mount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastMountPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastMountAreaUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MountAreaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMounted;
    
    RSGAMETECHRT_API FRsMountInfo();
};

