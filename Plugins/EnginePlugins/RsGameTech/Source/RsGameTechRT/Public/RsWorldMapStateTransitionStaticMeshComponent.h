#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "RsMapStateData.h"
#include "RsWorldMapStateTransitionComponent.h"
#include "Templates/SubclassOf.h"
#include "RsWorldMapStateTransitionStaticMeshComponent.generated.h"

class ARsWorldMapStateTransitionStaticMeshActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsWorldMapStateTransitionStaticMeshComponent : public URsWorldMapStateTransitionComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARsWorldMapStateTransitionStaticMeshActor> ClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CollectibleTag;
    
    URsWorldMapStateTransitionStaticMeshComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsMapStateData GetMapStateData() const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastSetTransform(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastSetState(int32 State);
    
};

