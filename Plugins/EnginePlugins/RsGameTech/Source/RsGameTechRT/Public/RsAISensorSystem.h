#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsAISensorSystem.generated.h"

class URsAISensor;
class URsAISensorDefinition;

UCLASS(Blueprintable)
class URsAISensorSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsAISensorDefinition*> SensorDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsAISensor*> Sensors;
    
public:
    URsAISensorSystem();
};

