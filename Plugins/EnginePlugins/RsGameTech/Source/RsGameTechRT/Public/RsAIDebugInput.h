#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "RsInputChord.h"
#include "RsAIDebugInput.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIDebugInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsInputChord EnableAIHotkey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsInputChord KillAllAIHotkey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsInputChord DestroyAllAIHotkey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DebugMoveActorSprintHotkey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DebugMoveActorRunHotkey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DebugMoveActorWalkFastHotkey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey DebugMoveActorWalkSlowHotkey;
    
    FRsAIDebugInput();
};

