#pragma once
#include "CoreMinimal.h"
#include "RsAIResource_Timer.h"
#include "SwAIResource_Taunt.generated.h"

UCLASS(Abstract, Blueprintable)
class SWGAME_API USwAIResource_Taunt : public URsAIResource_Timer {
    GENERATED_BODY()
public:
    USwAIResource_Taunt();
};

