#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsConditionalAnimNotifyState -FallbackName=RsConditionalAnimNotifyState
#include "SwAnimNotifyState_SetHitCollisionBase.generated.h"

class URsDamageType;

UCLASS(Blueprintable)
class USwAnimNotifyState_SetHitCollisionBase : public URsConditionalAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    URsDamageType* DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SwingDirectionCameraOffset;
    
    USwAnimNotifyState_SetHitCollisionBase();
};

