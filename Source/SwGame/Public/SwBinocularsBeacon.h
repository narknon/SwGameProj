#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsWorldMapBeaconSettings.h"
#include "RsBinocularsBeaconDelegateDelegate.h"
#include "SwBinocularsBeacon.generated.h"

UCLASS(Blueprintable)
class SWGAME_API ASwBinocularsBeacon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBinocularsBeaconDelegate OnBinocularsBeaconPlaced;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBinocularsBeaconDelegate OnBinocularsBeaconRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapBeaconSettings BeaconSettings;
    
    ASwBinocularsBeacon();
};

