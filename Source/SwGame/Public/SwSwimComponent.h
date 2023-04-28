#pragma once
#include "CoreMinimal.h"
#include "RsSwimComponent.h"
#include "SwSwimComponent.generated.h"

class USwStaminaMeterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwSwimComponent : public URsSwimComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USwStaminaMeterComponent* m_StaminaMeter;
    
public:
    USwSwimComponent();
};

