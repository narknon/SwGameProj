#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsAIPOISyncSlotData.h"
#include "RsAIPOISyncDefinition.generated.h"

UCLASS(Blueprintable)
class URsAIPOISyncDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAIPOISyncSlotData> SyncSlotsData;
    
    URsAIPOISyncDefinition();
};

