#pragma once
#include "CoreMinimal.h"
#include "RsBalanceBeamComponent.h"
#include "SwBalanceBeamComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwBalanceBeamComponent : public URsBalanceBeamComponent {
    GENERATED_BODY()
public:
    USwBalanceBeamComponent();
};

