#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "RsBTTask_SyncOnPOI.generated.h"

class AActor;
class AController;
class UAnimMontage;
class UDamageType;

UCLASS(Blueprintable)
class URsBTTask_SyncOnPOI : public UBTTaskNode {
    GENERATED_BODY()
public:
    URsBTTask_SyncOnPOI();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSyncEnding(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnAITakingDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
};

