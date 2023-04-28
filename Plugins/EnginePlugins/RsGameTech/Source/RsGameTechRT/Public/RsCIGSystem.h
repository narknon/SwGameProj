#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "RsCIGSystem.generated.h"

class ARsCharacter;

UCLASS(Blueprintable)
class URsCIGSystem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsCharacter* CigCharacter;
    
public:
    URsCIGSystem();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCigDebugUiVisibility(bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UnregisterCIGCharacter(ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegisterCIGCharacter(ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void PathCigAroundObstacles(FVector TargetLocation, ARsCharacter* NewCigCharacter, FVector& OutNewTargetLocation, bool& bOutPathAltered);
    
    UFUNCTION(BlueprintCallable)
    void LogDebug(const FString& Message, int32 DetailLevel);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Initialize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ARsCharacter* GetCIGCharacter();
    
    UFUNCTION(BlueprintCallable)
    static bool CigProjectPositionToNavmesh(ARsCharacter* NewCigCharacter, const FVector& Position, const FVector& QueryExtent, bool bSkipOverlapCheck, FVector& OutProjectedLocation);
    
    UFUNCTION(BlueprintCallable)
    static bool CigMultiCapsuleTrace(ARsCharacter* NewCigCharacter, const FVector& StartLocation, const FVector& EndLocation, bool bReturnPhysicsMaterial, bool bReturnFaceIndex, TArray<FHitResult>& OutHits);
    
};

