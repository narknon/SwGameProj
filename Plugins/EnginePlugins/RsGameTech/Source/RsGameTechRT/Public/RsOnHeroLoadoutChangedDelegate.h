#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_HeroLoadoutFlags.h"
#include "RsOnHeroLoadoutChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRsOnHeroLoadoutChanged, FRsBitfield_HeroLoadoutFlags, OldFlags, FRsBitfield_HeroLoadoutFlags, NewFlags);

