#pragma once
#include "CoreMinimal.h"
#include "RsHeroStateModifierDelegateDelegate.generated.h"

class URsHeroStateModifierDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRsHeroStateModifierDelegate, URsHeroStateModifierDefinition*, Modifier);

