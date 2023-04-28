#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsNarrativeConversationIdleData.h"
#include "RsNarrativeIdleInfoData.generated.h"

UCLASS(Blueprintable)
class URsNarrativeIdleInfoData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsNarrativeConversationIdleData IdleData;
    
    URsNarrativeIdleInfoData();
};

