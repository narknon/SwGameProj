#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagArray.h"
#include "NarrativeDatabankTagUnlockMappingDatabase.generated.h"

UCLASS(Blueprintable)
class UNarrativeDatabankTagUnlockMappingDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTagArray> UnlockTagsToDatabankTags;
    
    UNarrativeDatabankTagUnlockMappingDatabase();
};

