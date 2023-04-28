#pragma once
#include "CoreMinimal.h"
#include "Components/LineBatchComponent.h"
#include "RsWorldMapLineBatchComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsWorldMapLineBatchComponent : public ULineBatchComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapLayer;
    
public:
    URsWorldMapLineBatchComponent();
};

