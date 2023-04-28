#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsFireProjectileParameter.h"
#include "RsOffenseComponent.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsOffenseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    URsOffenseComponent();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotifiedToFireProjectile(UAnimSequenceBase* Animation, FRsFireProjectileParameter FireParam);
    
};

