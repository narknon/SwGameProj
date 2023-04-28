#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "RsHeroComponent.h"
#include "RsOnClashDelegateDelegate.h"
#include "RsOnClashEndDelegateDelegate.h"
#include "SwSaberClashComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwSaberClashComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnClashEndDelegate OnClashEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsOnClashDelegate OnClashButtonMashEnded;
    
    USwSaberClashComponent();
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishClashButtonPressed(FName ActionName, TEnumAsByte<EInputEvent> EventType, UObject* Handler);
    
    UFUNCTION(BlueprintCallable)
    void OnButtonMashPressed();
    
    UFUNCTION(BlueprintCallable)
    void OnButtonMashEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClashing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionClashing(FName ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentIndicatorWorld(FVector SaberStart, FVector SaberEnd) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentIndicatorLocal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetApprovableClashRange() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void EndClash();
    
};

