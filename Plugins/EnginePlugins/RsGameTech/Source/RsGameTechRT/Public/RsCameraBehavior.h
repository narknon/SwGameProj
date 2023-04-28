#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "RsCameraInputs.h"
#include "RsCameraOutputs.h"
#include "RsCameraBehavior.generated.h"

class AActor;
class UCurveFloat;
class URsBaseCameraBehaviorDefinition;

UCLASS(Blueprintable)
class URsCameraBehavior : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsBaseCameraBehaviorDefinition* BehaviorDefinition;
    
public:
    URsCameraBehavior();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstUpdate() const;
    
    UFUNCTION(BlueprintCallable)
    static float GetRotationSpeedYaw(const FRsCameraInputs& Inputs);
    
    UFUNCTION(BlueprintCallable)
    static float GetRotationSpeedPitch(const FRsCameraInputs& Inputs);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAnchorTargetsTrimmed(const UObject* WorldContextObject, FVector HeroLocation, float MaxEnemyDistance, float MaxLargeEnemyDistance, TArray<AActor*>& OutHostileTargetableActors);
    
    UFUNCTION(BlueprintCallable)
    static void CalculateWeightedAverageEnemyLocation(FVector HeroLocation, float InWeightTotal, float MaxEnemyDistance, UCurveFloat* EnemyWeightingCurve, float MaxLargeEnemyDistance, UCurveFloat* LargeEnemyWeightingCurve, const TArray<AActor*>& HostileTargetableActors, const TArray<bool>& IsLargeEnemies, FVector& OutWeightedAverageEnemyLocation, float& OutWeightTotal);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintUpdateInputs(const FRsCameraInputs& PreviousInputs, FRsCameraInputs& Inputs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintUpdate(const FRsCameraInputs& Inputs, const FRsCameraOutputs& PreviousOutputs, FRsCameraOutputs& Outputs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintEnd(const FRsCameraInputs& Inputs, const FRsCameraOutputs& PreviousOutputs, FRsCameraOutputs& Outputs);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BlueprintBegin(const FRsCameraInputs& Inputs, const FRsCameraOutputs& PreviousOutputs, FRsCameraOutputs& Outputs);
    
};

