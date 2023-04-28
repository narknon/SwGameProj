#pragma once
#include "CoreMinimal.h"
#include "RsCharacterDefinition.h"
#include "RsPlayerCharacterDefinition.generated.h"

UCLASS(Blueprintable)
class URsPlayerCharacterDefinition : public URsCharacterDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatSuctionMultiplier[5];
    
    URsPlayerCharacterDefinition();
};

