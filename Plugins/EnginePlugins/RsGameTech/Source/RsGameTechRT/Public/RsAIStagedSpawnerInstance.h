#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsAISpawnerNarrativeSettings -FallbackName=RsAISpawnerNarrativeSettings
#include "RsAISpawnerInstance.h"
#include "RsAISpawnerIntroSettings.h"
#include "RsAISpawnerPatrolSettings.h"
#include "RsAIStagedSpawnerInstance.generated.h"

class URsAICharacterDefinition;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIStagedSpawnerInstance : public FRsAISpawnerInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URsAICharacterDefinition> AICharacterDefinitionAssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<URsAICharacterDefinition> AICharacterDefinitionNewGamePlusAssetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerPatrolSettings PatrolSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerNarrativeSettings NarrativeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsAICharacterDefinition* AICharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsAICharacterDefinition* NGPAICharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAISpawnerIntroSettings IntroSettings;
    
    FRsAIStagedSpawnerInstance();
};

