#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsBoneFloat.h"
#include "RsBoneMask.generated.h"

class USkeleton;

UCLASS(Blueprintable)
class URsBoneMask : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsBoneFloat> BoneValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> CachedBoneValues;
    
public:
    URsBoneMask();
};

