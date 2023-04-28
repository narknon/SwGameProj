#pragma once
#include "CoreMinimal.h"
#include "RsConditionalAnimNotifyState.h"
#include "SwAnimNotifyState_SetHitCollisionBase.generated.h"

class URsDamageType;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, HideDropdown)
class SWGAME_API USwAnimNotifyState_SetHitCollisionBase : public URsConditionalAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    URsDamageType* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwingDirectionCameraOffset;
    
    USwAnimNotifyState_SetHitCollisionBase();
};

