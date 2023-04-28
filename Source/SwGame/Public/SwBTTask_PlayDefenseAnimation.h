#pragma once
#include "CoreMinimal.h"
#include "SwBTTask_PlayCombatStateAnimation.h"
#include "SwBTTask_PlayDefenseAnimation.generated.h"

class USwDefenseState;

UCLASS(Blueprintable)
class USwBTTask_PlayDefenseAnimation : public USwBTTask_PlayCombatStateAnimation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwDefenseState* DefenseTemplate;
    
public:
    USwBTTask_PlayDefenseAnimation();
};

