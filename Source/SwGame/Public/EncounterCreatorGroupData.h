#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERsAIScriptingMode.h"
#include "Templates/SubclassOf.h"
#include "EncounterCreatorGroupData.generated.h"

class ARsAIStagedSpawner;
class URsAICharacterDefinition;

USTRUCT(BlueprintType)
struct FEncounterCreatorGroupData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsAICharacterDefinition*> Spawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ARsAIStagedSpawner>> StagedSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIScriptingMode::Type> ScriptingMode;
    
    SWGAME_API FEncounterCreatorGroupData();
};

