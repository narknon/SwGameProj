#pragma once
#include "CoreMinimal.h"
#include "ERsAIPatrolPathUsage.h"
#include "ERsAIPatrolSpawnPoint.h"
#include "ERsAIScriptingMode.h"
#include "RsAISpawnerPatrolSettings.generated.h"

class ARsAIPatrolPathBase;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAISpawnerPatrolSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsAIPatrolPathBase* PatrolPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PatrolMotionParm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIPatrolSpawnPoint::Type> PatrolSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIPatrolPathUsage::Type> PatrolPathUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIScriptingMode::Type> ScriptingModeWhenDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSetHomeLocationToEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableCrowdAvoidance: 1;
    
    FRsAISpawnerPatrolSettings();
};

