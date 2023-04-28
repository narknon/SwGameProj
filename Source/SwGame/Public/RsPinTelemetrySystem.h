#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Rs/ERsPinTelemetryPlayerWeaponType.h"
#include "GameplayTagContainer.h"
#include "ERsDifficulty.h"
#include "Templates/SubclassOf.h"
#include "RsPinTelemetrySystem.generated.h"

class AActor;
class APawn;
class URsAbility;

UCLASS(Blueprintable)
class URsPinTelemetrySystem : public UObject {
    GENERATED_BODY()
public:
    URsPinTelemetrySystem();
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerUsedAbility(TSubclassOf<URsAbility> AbilityType, AActor* Target, bool bHasSucceeded);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnChanged(APawn* NewPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnHeroUpgradesChanged(FGameplayTagContainer OldTags, FGameplayTagContainer NewTags);
    
    UFUNCTION(BlueprintCallable)
    void OnDifficultyChanged(ERsDifficulty PreviousDifficulty, ERsDifficulty NewDifficulty);
    
    UFUNCTION(BlueprintCallable)
    FString GetHeroWeaponTypeString(const TEnumAsByte<ERsPinTelemetryPlayerWeaponType> HeroWeaponType) const;
    
};

