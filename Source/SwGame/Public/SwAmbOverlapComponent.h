#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "RsOnOverlapHeroDelegateDelegate.h"
#include "SwAmbOverlapComponent.generated.h"

class AActor;
class AVolume;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwAmbOverlapComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnOverlapHeroDelegate OnOverlapHeroBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnOverlapHeroDelegate OnOverlapHeroEnd;
    
private:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> PrimitiveComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AVolume> VolumeToOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistToHero;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStarted;
    
public:
    USwAmbOverlapComponent();
    UFUNCTION(BlueprintCallable)
    void SetVolume(AVolume* Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetPrimitiveComponent(UPrimitiveComponent* PrimitiveComp);
    
    UFUNCTION(BlueprintCallable)
    void SetIsUsingCamera(bool IsUsingCamera);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStareted(bool IsStarted);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

