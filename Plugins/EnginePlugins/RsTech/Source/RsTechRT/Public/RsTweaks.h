#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RsNuMagnitude.h"
#include "RsTweaks.generated.h"

class URsTweaks;

UCLASS(Blueprintable)
class URsTweaks : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TweaksPath;
    
    URsTweaks();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URsTweaks* MakeRsTweaks(const FName tweaksFilePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVector(bool& Success, const FName tweakName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsTweaks* GetTweaks(const FName tweakName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetString(bool& Success, const FName tweakName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotator(bool& Success, const FName tweakName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsNuMagnitude GetNonUniformMagnitude(bool& Success, const FName tweakName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetNameString(bool& Success, const FName tweakName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetIntegerValue(bool& Success, const FName tweakName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFloatValue(bool& Success, const FName tweakName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBooleanValue(bool& Success, const FName tweakName) const;
    
};

