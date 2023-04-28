#pragma once
#include "CoreMinimal.h"
#include "SwWorldMapRayCastResultData.generated.h"

class ARsWorldMapActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FSwWorldMapRayCastResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsWorldMapActor* WorldMapActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* HitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfIntersection;
    
    SWGAME_API FSwWorldMapRayCastResultData();
};

