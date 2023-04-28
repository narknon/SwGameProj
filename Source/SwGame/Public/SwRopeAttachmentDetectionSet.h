#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwRopeAttachmentDetectionCone.h"
#include "Templates/SubclassOf.h"
#include "SwRopeAttachmentDetectionSet.generated.h"

class ARsRopeActor;

USTRUCT(BlueprintType)
struct FSwRopeAttachmentDetectionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DetectionBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DetectionLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ARsRopeActor>> RopeTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwRopeAttachmentDetectionCone> Cones;
    
    SWGAME_API FSwRopeAttachmentDetectionSet();
};

