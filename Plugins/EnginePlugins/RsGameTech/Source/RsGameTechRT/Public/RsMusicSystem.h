#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CombatantMusicThreat.h"
#include "RsMusicSystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class URsMusicSystem : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsMusicSystem();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpdateMusicThreats(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetNumMusicThreats(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetMusicThreatContributions(UObject* WorldContextObject, TArray<FCombatantMusicThreat>& ThreatConributions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMusicThreat(UObject* WorldContextObject);
    
};

