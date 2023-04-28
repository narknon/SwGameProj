#pragma once
#include "CoreMinimal.h"
#include "HavokClothActionBase.h"
#include "HavokClothActionWind.generated.h"

class AWindDirectionalSource;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHavokClothActionWind : public UHavokClothActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWindDirectionalSource* WindDirectionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDrag;
    
    UHavokClothActionWind();
    UFUNCTION(BlueprintCallable)
    void SetWindMinSpeed(float MinSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetWindMaxSpeed(float MaxSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetWindMaxDrag(float MaxDrag);
    
    UFUNCTION(BlueprintCallable)
    void SetWindFrequency(float Frequency);
    
    UFUNCTION(BlueprintCallable)
    void SetWindDirectionSource(AWindDirectionalSource* NewWindDirectionSource);
    
};

