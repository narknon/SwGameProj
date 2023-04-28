#pragma once
#include "CoreMinimal.h"
#include "SwAICharacter.h"
#include "SwBaseMount.generated.h"

UCLASS(Blueprintable)
class ASwBaseMount : public ASwAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SemiSleepDIstanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPlayerDistanceCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NextPlayerDistanceCheckTime;
    
    ASwBaseMount();
};

