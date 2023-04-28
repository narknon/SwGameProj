#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "RsCameraAnimationData.h"
#include "SwSpeederBikeSyncDefinitionPrimaryTarget.h"
#include "SwSpeederBikeSyncDefinitionSecondaryTarget.h"
#include "SwSpeederBikeSyncDefinitionDataAsset.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwSpeederBikeSyncDefinitionDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSpeederBikeSyncDefinitionPrimaryTarget PrimaryTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwSpeederBikeSyncDefinitionSecondaryTarget> SecondaryTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform BaseLocalTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlayCameraAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraAnimationData CameraAnimationData;
    
    USwSpeederBikeSyncDefinitionDataAsset();
};

