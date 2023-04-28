#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsAISpawnerNarrativeSettings -FallbackName=RsAISpawnerNarrativeSettings
#include "RsAICinematicOptions.h"
#include "RsAIScriptingOptions.h"
#include "RsAISpawnerIKRigSettings.h"
#include "RsAISpawnerInstance.h"
#include "RsAISpawnerIntroSettings.h"
#include "RsAISpawnerPOISettings.h"
#include "RsAISpawnerPatrolSettings.h"
#include "RsAISpawnerWanderSettings.h"
#include "RsAISimpleSpawnerInstance.generated.h"

class URsAICharacterDefinition;
class URsAISensorDefinition_Vision;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAISimpleSpawnerInstance : public FRsAISpawnerInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsAICharacterDefinition* AICharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsAICharacterDefinition* NGPAICharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URsAICharacterDefinition> AICharacterDefinitionAssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URsAICharacterDefinition> AICharacterDefinitionNewGamePlusAssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIScriptingOptions ScriptingOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAICinematicOptions CinematicOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerIntroSettings IntroSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerPOISettings POISettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerNarrativeSettings NarrativeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerPatrolSettings PatrolSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerWanderSettings WanderSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerIKRigSettings IKRigSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnOnStartPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanNeverAwake: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsAISensorDefinition_Vision* OverrideVisionDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URsAISensorDefinition_Vision> OverrideVisionDefinitionAssetPtr;
    
public:
    FRsAISimpleSpawnerInstance();
};

