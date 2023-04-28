#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "RsAISpatialQueryData_GridOnNavMesh.h"
#include "SwBTService_FindFollowPoints.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwBTService_FindFollowPoints : public UBTService {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector TargetLocationKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpatialQueryData_GridOnNavMesh GridQueryOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToFollowee;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDistance2DToFollowee;
    
public:
    USwBTService_FindFollowPoints();
};

