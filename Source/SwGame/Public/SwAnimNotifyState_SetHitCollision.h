#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterColliders.h"
#include "SwAnimNotifyState_SetHitCollisionBase.h"
#include "SwAnimNotifyState_SetHitCollision.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class SWGAME_API USwAnimNotifyState_SetHitCollision : public USwAnimNotifyState_SetHitCollisionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsCharacterColliders CollisionParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionPartsName;
    
    USwAnimNotifyState_SetHitCollision();
};

