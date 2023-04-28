#pragma once
#include "CoreMinimal.h"
#include "AkAudioInputComponent.h"
#include "AkSubmixInputComponent.generated.h"

class USoundSubmix;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAkSubmixInputComponent : public UAkAudioInputComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmix* SubmixToRecord;
    
    UAkSubmixInputComponent();
};

