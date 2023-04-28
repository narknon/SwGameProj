#pragma once
#include "CoreMinimal.h"
#include "RsAISystem.h"
#include "SwAISystem.generated.h"

class USwAIFightSystem;

UCLASS(Blueprintable)
class USwAISystem : public URsAISystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USwAIFightSystem* FightSystem;
    
public:
    USwAISystem();
};

