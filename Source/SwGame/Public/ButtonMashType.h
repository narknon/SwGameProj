#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ButtonMashType.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SWGAME_API UButtonMashType : public UObject {
    GENERATED_BODY()
public:
    UButtonMashType();
};

