#pragma once
#include "CoreMinimal.h"
#include "AkManagedVolume.h"
#include "AkSpatialAudioVolume.generated.h"

class UAkLateReverbComponent;
class UAkPriorityComponent;
class UAkRoomComponent;
class UAkRoomTypeComponent;
class UAkSurfaceReflectorSetComponent;

UCLASS(Blueprintable)
class AAkSpatialAudioVolume : public AAkManagedVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkSurfaceReflectorSetComponent* SurfaceReflectorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkLateReverbComponent* LateReverb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkRoomComponent* Room;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkRoomTypeComponent* RoomTypeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkPriorityComponent* PriorityComponent;
    
    AAkSpatialAudioVolume();
};

