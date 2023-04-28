#pragma once
#include "CoreMinimal.h"
#include "RsAIStepAsideBehaviorParametersData.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIStepAsideBehaviorParametersData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceFromPlayerToConsiderStepAside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSecondsFromPlayerContactToConsiderStepAside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptNewStepAsideRequestsWhenNotIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCanAcceptChangesToInProgressStepAsideRequests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPermittedDirectionChangeRequestDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerRadiusFudgeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NpcRadiusFudgeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnticipatedStepAsideDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallPolyMinDegreesFromGoalDirectionForCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PolyMaxDegreesFromUpVectorToBeConsideredFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PolyMaxDegreesFromDownVectorToBeConsideredCeiling;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CollisionDetectionVoxelSampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollisionDetectionVoxelSuperSampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPossibleCollisionCylinderRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPossibleCollisionCylinderHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WorldQueryAabbFudgeFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DepthOfGeometryBelowAabbToEvaluateWhenLookingForHoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoleDetectionVoxelSizeAsAIDiameterRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoxelHeightBelowAabbToQualifyAsHole;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxNumHoleFindingIterations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MinHoleVoxelNeighborValueAccumulation;
    
    FRsAIStepAsideBehaviorParametersData();
};

