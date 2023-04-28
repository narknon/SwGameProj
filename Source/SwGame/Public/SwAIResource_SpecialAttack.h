#pragma once
#include "CoreMinimal.h"
#include "RsAIResource.h"
#include "SwAIResource_SpecialAttack.generated.h"

UCLASS(Blueprintable)
class USwAIResource_SpecialAttack : public URsAIResource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RequiredAttackPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
public:
    USwAIResource_SpecialAttack();
};

