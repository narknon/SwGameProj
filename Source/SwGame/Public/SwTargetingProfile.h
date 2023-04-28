#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SwTargetingProfile.generated.h"

UCLASS(Abstract, Blueprintable)
class SWGAME_API USwTargetingProfile : public UDataAsset {
    GENERATED_BODY()
public:
    USwTargetingProfile();
};

