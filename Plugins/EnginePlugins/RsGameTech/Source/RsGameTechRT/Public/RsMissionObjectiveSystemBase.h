#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsMissionObjectiveSystemBase.generated.h"

class UObject;

UCLASS(Blueprintable)
class ARsMissionObjectiveSystemBase : public AActor {
    GENERATED_BODY()
public:
    ARsMissionObjectiveSystemBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMissionCompleted(FName MissionKey, bool bNotifyPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMissionActive(FName MissionKey, bool bNotifyPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMissionAcquired(FName MissionKey, bool bNotifyPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    static void PopulateMissionKeyList(UObject* ContextObject, TArray<FName>& Options);
    
};

