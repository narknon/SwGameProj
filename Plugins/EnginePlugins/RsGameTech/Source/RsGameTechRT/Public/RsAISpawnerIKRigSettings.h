#pragma once
#include "CoreMinimal.h"
#include "RsAISpawnerIKRigSettings.generated.h"

class USkeleton;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAISpawnerIKRigSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetIKRigConversionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseIkRigSkeletalMeshInSequencer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    FRsAISpawnerIKRigSettings();
};

