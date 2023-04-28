#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsJumpData.h"
#include "RsJumpDefinition.h"
#include "RsBasicJumpDefinition.generated.h"

UCLASS(Blueprintable)
class URsBasicJumpDefinition : public URsJumpDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsJumpData JumpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpInputNotHeldScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ForceJumpInputHeldAttributeTags;
    
    URsBasicJumpDefinition();
};

