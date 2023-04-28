#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "ERsWorldMapCollectableType.h"
#include "RsWorldMapCollectableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsWorldMapCollectableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LevelTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapCollectableType CollectableType;
    
    URsWorldMapCollectableComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BroadcastCollectableAcquired() const;
    
};

