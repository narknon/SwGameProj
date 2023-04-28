#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RsGeoLocator.h"
#include "RsSyncInstance.h"
#include "RsMasterSyncInstance.generated.h"

UCLASS(Blueprintable)
class URsMasterSyncInstance : public URsSyncInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float YawTargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsGeoLocator ConstraintLocator;
    
    URsMasterSyncInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateSyncTransform(FTransform InCurrentLocaiton, float InDeltaTime, FTransform& OutNewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateSyncLocation(FVector InCurrentLocaiton, float InDeltaTime, FVector& OutNewLocation);
    
};

