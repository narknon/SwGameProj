#pragma once
#include "CoreMinimal.h"
#include "ECustomizationSlot.h"
#include "RsIKBehaviorDefinition.h"
#include "RsIKBehaviorDefinition_BuddyDroidBackpack.generated.h"

UCLASS(Blueprintable)
class URsIKBehaviorDefinition_BuddyDroidBackpack : public URsIKBehaviorDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECustomizationSlot::Type> PrimaryCollisionSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECustomizationSlot::Type> SecondaryCollisionSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToContactPoint;
    
    URsIKBehaviorDefinition_BuddyDroidBackpack();
};

