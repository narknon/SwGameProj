#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "RsMotionMatchBoneData.h"
#include "RsMotionMatchSkeletonUserData.generated.h"

UCLASS(Blueprintable)
class URsMotionMatchSkeletonUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsMotionMatchBoneData> MotionMatchBones;
    
    URsMotionMatchSkeletonUserData();
};

