#pragma once
#include "CoreMinimal.h"
#include "SwWorldMapCameraHeightControls.generated.h"

USTRUCT(BlueprintType)
struct FSwWorldMapCameraHeightControls {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAdjustHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsymptoticSpeed;
    
    SWGAME_API FSwWorldMapCameraHeightControls();
};

