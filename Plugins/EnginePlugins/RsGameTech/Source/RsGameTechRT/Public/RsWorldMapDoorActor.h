#pragma once
#include "CoreMinimal.h"
#include "ERsWorldMapDoorType.h"
#include "RsWorldMapGatewayActor.h"
#include "RsWorldMapDoorActor.generated.h"

UCLASS(Blueprintable)
class ARsWorldMapDoorActor : public ARsWorldMapGatewayActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapDoorType DoorType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleOnMapIfUnlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsUnlockable;
    
public:
    ARsWorldMapDoorActor();
};

