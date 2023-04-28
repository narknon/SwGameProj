#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/PrimitiveComponent.h"
#include "ERsDistanceTriggerType.h"
#include "RsTriggerSignatureDelegate.h"
#include "RsBaseTriggerComponent.generated.h"

class AActor;
class ARsHero;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsBaseTriggerComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsTriggerSignature OnTriggerEntered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsTriggerSignature OnTriggerExited;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsDistanceTriggerType TriggerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeactivateAfterTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawOnlyIfSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor ShapeColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARsHero> HeroPtr;
    
public:
    URsBaseTriggerComponent();
    UFUNCTION(BlueprintCallable)
    void SetTriggerEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInTrigger(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorsInTrigger(TArray<AActor*>& OutActorsInTrigger) const;
    
};

