#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwGameDestructibleVisualizationInEditorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwGameDestructibleVisualizationInEditorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USwGameDestructibleVisualizationInEditorComponent();
};

