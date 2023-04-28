#pragma once
#include "CoreMinimal.h"
#include "ERsZiplineAnimationState.h"
#include "ERsZiplineAttachmentState.h"
#include "ERsZiplineEntryType.h"
#include "ERsZiplineMovementDirection.h"
#include "ERsZiplineMovementMode.h"
#include "AnimState_Zipline.generated.h"

USTRUCT(BlueprintType)
struct FAnimState_Zipline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsZiplineAttachmentState CurrentAttachmentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsZiplineAnimationState CurrentAnimationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsZiplineMovementDirection MovementDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsZiplineMovementMode MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsForcedBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInputSufficientForBoost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsZiplineEntryType EntryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComingFromPhaseDash;
    
    RSGAMETECHRT_API FAnimState_Zipline();
};

