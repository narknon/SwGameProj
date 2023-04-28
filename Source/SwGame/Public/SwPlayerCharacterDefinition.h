#pragma once
#include "CoreMinimal.h"
#include "RsPlayerCharacterDefinition.h"
#include "SwPlayerCharacterDefinition.generated.h"

class USwTargetingProfile;

UCLASS(Blueprintable)
class USwPlayerCharacterDefinition : public URsPlayerCharacterDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwTargetingProfile* DefaultTargetingProfile;
    
    USwPlayerCharacterDefinition();
};

