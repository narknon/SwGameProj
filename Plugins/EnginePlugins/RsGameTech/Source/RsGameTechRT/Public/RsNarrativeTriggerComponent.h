#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "NarrativeEvent.h"
#include "NarrativeEventResult.h"
#include "RsNarrativeTriggerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsNarrativeTriggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNarrativeEvent EventDetails;
    
    URsNarrativeTriggerComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FNarrativeEventResult TriggerNarrativeForActors(const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FNarrativeEventResult TriggerNarrative();
    
};

