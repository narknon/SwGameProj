#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HavokClothActionBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHavokClothActionBase : public UActorComponent {
    GENERATED_BODY()
public:
    UHavokClothActionBase();
};

