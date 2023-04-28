#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwGameDestructibleVisualizationInEditorComponent.generated.h"

UCLASS(Blueprintable, HideDropdown, NotPlaceable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwGameDestructibleVisualizationInEditorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USwGameDestructibleVisualizationInEditorComponent();
};

