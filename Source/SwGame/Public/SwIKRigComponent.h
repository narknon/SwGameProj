#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsIKRigComponent -FallbackName=RsIKRigComponent
#include "SwIKRigComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwIKRigComponent : public URsIKRigComponent {
    GENERATED_BODY()
public:
    USwIKRigComponent();
};

