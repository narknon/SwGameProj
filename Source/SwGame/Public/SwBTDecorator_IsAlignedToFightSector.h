#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESwAIFightSector.h"
#include "SwBTDecorator_IsAlignedToFightSector.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwBTDecorator_IsAlignedToFightSector : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESwAIFightSector::Type> Sector;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgnoreAlignmentCharacterRadiusMultiplier;
    
public:
    USwBTDecorator_IsAlignedToFightSector();
};

