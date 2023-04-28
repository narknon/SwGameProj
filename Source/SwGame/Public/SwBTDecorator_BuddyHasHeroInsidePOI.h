#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SwBTDecorator_BuddyHasHeroInsidePOI.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwBTDecorator_BuddyHasHeroInsidePOI : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckRadiusCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckRadiusConstant;
    
public:
    USwBTDecorator_BuddyHasHeroInsidePOI();
};

