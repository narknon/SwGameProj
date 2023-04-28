#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsBlockEventDelegate.h"
#include "SwDefenseComponent.generated.h"

class AActor;
class ARsCharacter;
class URsDamageType;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwDefenseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBlockInAir;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBlockEvent BlockEnter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBlockEvent BlockBroken;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBlockEvent BlockOver;
    
public:
    USwDefenseComponent();
    UFUNCTION(BlueprintCallable)
    void StartDefense(ARsCharacter* Attacker, const TSoftClassPtr<URsDamageType>& DamageClass, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void BlockContact(ARsCharacter* Attacker);
    
};

