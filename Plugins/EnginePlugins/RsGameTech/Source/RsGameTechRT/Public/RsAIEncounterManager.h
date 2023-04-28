#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsOnBountyHunterEncounterSpawnedEventDelegate.h"
#include "RsAIEncounterManager.generated.h"

UCLASS(Blueprintable)
class URsAIEncounterManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> MasterEncounterGroupsSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnBountyHunterEncounterSpawnedEvent OnBountyHunterEncounterSpawned;
    
    URsAIEncounterManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnEncounterInstanceIncremented();
    
};

