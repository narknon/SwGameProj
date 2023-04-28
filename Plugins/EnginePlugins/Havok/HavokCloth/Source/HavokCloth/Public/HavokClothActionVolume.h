#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "HavokClothActionVolume.generated.h"

class AActor;
class UHavokClothActionBase;

UCLASS(Blueprintable)
class AHavokClothActionVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UHavokClothActionBase*> ClothActions;
    
    AHavokClothActionVolume();
    UFUNCTION(BlueprintCallable)
    void OnActorEndOverlapDelegate(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void OnActorBeginOverlapDelegate(AActor* OverlappedActor, AActor* OtherActor);
    
};

