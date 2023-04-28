#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERsWorldMapDoorType.h"
#include "RsWorldMapDoorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsWorldMapDoorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsUnlockable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapDoorType DoorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExcludeFromWorldMap;
    
    URsWorldMapDoorComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BroadcastDoorUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void BroadcastDoorLocked() const;
    
};

