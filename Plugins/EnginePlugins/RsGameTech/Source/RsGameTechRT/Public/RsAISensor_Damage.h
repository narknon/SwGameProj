#pragma once
#include "CoreMinimal.h"
#include "RsAISensor.h"
#include "RsAISensor_Damage.generated.h"

class AActor;
class AController;
class UDamageType;

UCLASS(Blueprintable)
class URsAISensor_Damage : public URsAISensor {
    GENERATED_BODY()
public:
    URsAISensor_Damage();
private:
    UFUNCTION(BlueprintCallable)
    void OnTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
};

