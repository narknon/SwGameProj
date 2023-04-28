#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EAkPriority.h"
#include "AkPriorityComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAkPriorityComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAkPriority Priority;
    
    UAkPriorityComponent();
};

