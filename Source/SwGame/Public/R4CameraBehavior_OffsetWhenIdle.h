#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsCameraEaseParams.h"
#include "R4CameraBehavior_Offset.h"
#include "R4CameraBehavior_OffsetWhenIdle.generated.h"

UCLASS(Blueprintable)
class UR4CameraBehavior_OffsetWhenIdle : public UR4CameraBehavior_Offset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBeforeApplyingOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraEaseParams EaseInParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraEaseParams EaseOutParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludeTags;
    
public:
    UR4CameraBehavior_OffsetWhenIdle();
};

