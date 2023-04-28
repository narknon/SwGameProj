#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AkBankLoadComponent.generated.h"

class UAkAudioBank;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAkBankLoadComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> Banks;
    
    UAkBankLoadComponent();
};

