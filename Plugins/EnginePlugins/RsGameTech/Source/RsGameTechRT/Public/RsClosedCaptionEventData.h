#pragma once
#include "CoreMinimal.h"
#include "RsClosedCaptionCommonSubtitleData.h"
#include "RsClosedCaptionEventData.generated.h"

class AActor;
class USceneComponent;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsClosedCaptionEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsClosedCaptionCommonSubtitleData SubtitleData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ActorToPlayOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponentToPlayOn;
    
    FRsClosedCaptionEventData();
};

