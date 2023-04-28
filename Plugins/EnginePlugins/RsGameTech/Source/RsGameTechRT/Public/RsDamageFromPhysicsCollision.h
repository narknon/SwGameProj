#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsDamageFromPhysicsCollisionCategory.h"
#include "RsDamageFromPhysicsCollision.generated.h"

UCLASS(Blueprintable)
class URsDamageFromPhysicsCollision : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsDamageFromPhysicsCollisionCategory> DamageCategories;
    
    URsDamageFromPhysicsCollision();
};

