#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsAIPOIInteractionData.h"
#include "RsAIPOIDefinition.generated.h"

UCLASS(Blueprintable)
class URsAIPOIDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAIPOIInteractionData> AIInteractionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerCharacterCooldown;
    
    URsAIPOIDefinition();
};

