#pragma once
#include "CoreMinimal.h"
#include "FloatingInWaterHiResPoolElement.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FFloatingInWaterHiResPoolElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* SpawnedHiResActor;
    
    SWGAME_API FFloatingInWaterHiResPoolElement();
};

