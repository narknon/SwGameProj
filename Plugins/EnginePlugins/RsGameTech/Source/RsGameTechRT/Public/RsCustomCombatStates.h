#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsCustomCombatStateDescriptor.h"
#include "RsCustomCombatStates.generated.h"

UCLASS(Blueprintable)
class URsCustomCombatStates : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsCustomCombatStateDescriptor> CustomCombatStates;
    
    URsCustomCombatStates();
};

