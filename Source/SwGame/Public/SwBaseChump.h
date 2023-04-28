#pragma once
#include "CoreMinimal.h"
#include "SwAICharacter.h"
#include "SwBaseChump.generated.h"

UCLASS(Blueprintable)
class ASwBaseChump : public ASwAICharacter {
    GENERATED_BODY()
public:
    ASwBaseChump();
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bEnabled, bool bIncludComponents);
    
};

