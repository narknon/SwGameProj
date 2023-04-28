#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SwFloatingInWaterHiResActorDefinition.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SWGAME_API FSwFloatingInWaterHiResActorDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> HiResActorClass;
    
    FSwFloatingInWaterHiResActorDefinition();
};

