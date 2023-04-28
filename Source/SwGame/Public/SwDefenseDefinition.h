#pragma once
#include "CoreMinimal.h"
#include "EDefenseTypes.h"
#include "ERsCharacterDefense.h"
#include "RsDefenseDefinition.h"
#include "RsDefenseDefinitionData.h"
#include "SwDefenseDataEntry.h"
#include "SwDefenseDefinition.generated.h"

class URsDamageType;

UCLASS(Blueprintable)
class USwDefenseDefinition : public URsDefenseDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<URsDamageType>, EDefenseTypes> DamageMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsCharacterDefense, FRsDefenseDefinitionData> DefenseDataContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDefenseTypes, FSwDefenseDataEntry> DefenseData;
    
public:
    USwDefenseDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDefenseTypes GetDefenseFromDamageType(const TSoftClassPtr<URsDamageType> DamageType) const;
    
};

