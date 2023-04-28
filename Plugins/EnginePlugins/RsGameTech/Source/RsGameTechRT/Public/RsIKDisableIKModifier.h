#pragma once
#include "CoreMinimal.h"
#include "RsIKModifier.h"
#include "RsIKDisableIKModifier.generated.h"

UCLASS(Blueprintable)
class URsIKDisableIKModifier : public URsIKModifier {
    GENERATED_BODY()
public:
    URsIKDisableIKModifier();
};

