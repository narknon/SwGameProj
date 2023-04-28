#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERsWayfinderGoalFoundMode.h"
#include "ERsWayfinderMode.h"
#include "SwWorldMapWayfinderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwWorldMapWayfinderComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWayfinderMode CurrentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWayfinderGoalFoundMode CurrentGoalMode;
    
public:
    USwWorldMapWayfinderComponent();
};

