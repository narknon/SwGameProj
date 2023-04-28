#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "RsLimbBeganOverlapEventDelegate.generated.h"

class AActor;
class UPrimitiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FRsLimbBeganOverlapEvent, FGameplayTag, LimbTag, UPrimitiveComponent*, OverlappedComponent, AActor*, OtherActor, UPrimitiveComponent*, OtherComp, int32, OtherBodyIndex, bool, bFromSweep, const FHitResult&, SweepResult);

