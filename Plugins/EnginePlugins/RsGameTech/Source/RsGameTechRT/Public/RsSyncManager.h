#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsSyncGroup.h"
#include "RsSyncManager.generated.h"

UCLASS(Blueprintable)
class URsSyncManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsSyncGroup> SyncGroupArray;
    
public:
    URsSyncManager();
    UFUNCTION(BlueprintCallable)
    void DebugGetCurrentFailedTopologyPackages();
    
};

