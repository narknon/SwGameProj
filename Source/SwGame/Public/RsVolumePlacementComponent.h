#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RsVolumePlacementData.h"
#include "RsVolumePlacementComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsVolumePlacementComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsVolumePlacementData> VolumeData;
    
    URsVolumePlacementComponent();
};

