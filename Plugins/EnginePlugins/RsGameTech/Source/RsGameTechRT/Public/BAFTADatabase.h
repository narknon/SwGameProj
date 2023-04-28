#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "BAFTAEventDataSet.h"
#include "BAFTADatabase.generated.h"

UCLASS(Blueprintable)
class UBAFTADatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FBAFTAEventDataSet> EventContextsToDataSets;
    
    UBAFTADatabase();
};

