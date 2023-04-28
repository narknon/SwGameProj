#pragma once
#include "CoreMinimal.h"
#include "RsHeroComponent.h"
#include "RsWallRejectionComponent.generated.h"

class URsWallRejectionSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsWallRejectionComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsWallRejectionSettings* Settings;
    
    URsWallRejectionComponent();
};

