#pragma once
#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "AkAudioEvent.generated.h"

class UAkAssetPlatformData;

UCLASS(Blueprintable)
class UAkAudioEvent : public UAkAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UAkAssetPlatformData*> LocalizedPlatformAssetDataMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAssetPlatformData* CurrentLocalizedPlatformData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAttenuationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInfinite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDuration;
    
    UAkAudioEvent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaximumDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxAttenuationRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInfinite() const;
    
};

