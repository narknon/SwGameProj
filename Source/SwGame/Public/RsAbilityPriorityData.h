#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAbilityPriorities.h"
#include "RsAbilityPriorityData.generated.h"

USTRUCT(BlueprintType)
struct FRsAbilityPriorityData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAbilityPriorities::Type> SwForceSlowAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAbilityPriorities::Type> SwForcePushAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAbilityPriorities::Type> SwForcePullAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAbilityPriorities::Type> SwForceTelekinesisAbility;
    
    SWGAME_API FRsAbilityPriorityData();
};

