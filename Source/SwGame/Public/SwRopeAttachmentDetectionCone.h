#pragma once
#include "CoreMinimal.h"
#include "ESwRopeAttachmentDetectionDirection.h"
#include "SwRopeAttachmentDetectionCone.generated.h"

USTRUCT(BlueprintType)
struct FSwRopeAttachmentDetectionCone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionDistanceSpeedScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionConeAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionScoringAlignmentScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionScoringDistanceScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwRopeAttachmentDetectionDirection DetectionDirection;
    
    SWGAME_API FSwRopeAttachmentDetectionCone();
};

