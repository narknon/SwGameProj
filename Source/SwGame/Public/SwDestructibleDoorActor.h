#pragma once
#include "CoreMinimal.h"
#include "SwGameDestructibleActor.h"
#include "SwDestructibleDoorActor.generated.h"

class AActor;
class URsWorldMapDoorComponent;

UCLASS(Blueprintable)
class ASwDestructibleDoorActor : public ASwGameDestructibleActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapDoorComponent* WorldMapDoorComponent;
    
    ASwDestructibleDoorActor();
    UFUNCTION(BlueprintCallable)
    void OnDoorDestructed(AActor* DestructibleActor, int32 PhaseIndex, const bool DuringInitializationFromSaveGameState, const bool DuringInitializationFromWorldStateSystem);
    
};

