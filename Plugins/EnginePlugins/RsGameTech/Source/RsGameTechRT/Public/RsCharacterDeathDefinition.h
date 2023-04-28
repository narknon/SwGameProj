#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERsCharacterDeath.h"
#include "RsDeathDefinitionData.h"
#include "Templates/SubclassOf.h"
#include "RsCharacterDeathDefinition.generated.h"

class UDamageType;

UCLASS(Blueprintable)
class URsCharacterDeathDefinition : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UDamageType>, ERsCharacterDeath> DamageToDeathMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsCharacterDeath, FRsDeathDefinitionData> DeathDataContainer;
    
public:
    URsCharacterDeathDefinition();
};

