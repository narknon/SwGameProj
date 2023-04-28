#pragma once
#include "CoreMinimal.h"
#include "Animation/SkeletalMeshActor.h"
#include "HavokClothActor.generated.h"

class UHavokClothEntityComponent;

UCLASS(Blueprintable)
class AHavokClothActor : public ASkeletalMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHavokClothEntityComponent* ClothEntityComponent;
    
    AHavokClothActor();
};

