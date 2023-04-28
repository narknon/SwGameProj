#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsStickInputDebugSettings.h"
#include "RsStickInputProcessing_DirectionClamping.h"
#include "RsStickInputProcessing_DynamicScaling.h"
#include "RsStickInputProcessing_InnerOuterDeadZone.h"
#include "RsStickInputProcessing_Response.h"
#include "RsStickInputProcessing_Speed.h"
#include "RsStickInputProcessingData.generated.h"

UCLASS(Blueprintable)
class URsStickInputProcessingData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseInnerOuterDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsStickInputProcessing_InnerOuterDeadZone InnerOuterDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseDirectionClamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsStickInputProcessing_DirectionClamping> DirectionClamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsStickInputProcessing_Response ResponseRemapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseDynamicScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsStickInputProcessing_DynamicScaling DynamicScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsStickInputProcessing_Speed SpeedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsStickInputDebugSettings DebugSettings;
    
    URsStickInputProcessingData();
};

