#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsDiedEventDelegate.h"
#include "RsDiedEvent_InternalDelegate.h"
#include "RsPostDeathEventDelegate.h"
#include "RsRevivedEventDelegate.h"
#include "RsHealthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsHealthComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsDiedEvent_Internal OnDiedEvent_Internal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsDiedEvent OnDiedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPostDeathEvent OnPostDeathEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsRevivedEvent OnRevivedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
public:
    URsHealthComponent();
};

