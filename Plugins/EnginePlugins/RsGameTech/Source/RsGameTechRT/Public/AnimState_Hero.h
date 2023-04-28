#pragma once
#include "CoreMinimal.h"
#include "ERsNavState.h"
#include "AnimState_Hero.generated.h"

USTRUCT(BlueprintType)
struct FAnimState_Hero {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsNavState CurrentNavState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsNavState PreviousNavState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsNavState PreviousValidNavState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeInCurrentNavState;
    
    RSGAMETECHRT_API FAnimState_Hero();
};

