#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "RsSweptCollisionComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsSweptCollisionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSweepHitDelegate, AActor*, OtherActor, UPrimitiveComponent*, OtherComponent, const FHitResult&, HitResult);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Extrapolation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSweepHitDelegate OnSweepHit;
    
    URsSweptCollisionComponent();
    UFUNCTION(BlueprintCallable)
    void IgnoreComponent(const UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreActor(const AActor* Actor);
    
};

