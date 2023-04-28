#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "RsLimb.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class URsLimb : public UObject {
    GENERATED_BODY()
public:
    URsLimb();
    UFUNCTION(BlueprintCallable)
    void OnLimbComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

