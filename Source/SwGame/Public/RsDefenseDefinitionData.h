#pragma once
#include "CoreMinimal.h"
#include "RsDefenseDefinitionData.generated.h"

class URsDirectionalAnimData;
class USwDefenseState;

USTRUCT(BlueprintType)
struct FRsDefenseDefinitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsDirectionalAnimData* AnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwDefenseState* DefenseTemplate;
    
    SWGAME_API FRsDefenseDefinitionData();
};

