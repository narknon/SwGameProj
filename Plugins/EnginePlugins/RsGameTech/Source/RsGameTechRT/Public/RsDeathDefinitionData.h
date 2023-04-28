#pragma once
#include "CoreMinimal.h"
#include "RsDeathDefinitionData.generated.h"

class URsDirectionalAnimData;

USTRUCT(BlueprintType)
struct FRsDeathDefinitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsDirectionalAnimData* AnimType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateCharacter;
    
    RSGAMETECHRT_API FRsDeathDefinitionData();
};

