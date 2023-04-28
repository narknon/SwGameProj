#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsDamageInfo.h"
#include "RsDamagableActor.generated.h"

UCLASS(Blueprintable)
class SWGAME_API ARsDamagableActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsDamageInfo LastDamageInfo;
    
    ARsDamagableActor();
};

