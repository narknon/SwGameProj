#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterColliders.h"
#include "SwAnimNotifyState_SetHitCollisionBase.h"
#include "SwAnimNotifyState_SetMultiHitCollision.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class SWGAME_API USwAnimNotifyState_SetMultiHitCollision : public USwAnimNotifyState_SetHitCollisionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ERsCharacterColliders> CollisionParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CollisionPartsName;
    
    USwAnimNotifyState_SetMultiHitCollision();
};

