#pragma once
#include "CoreMinimal.h"
#include "NavModifierComponent.h"
#include "RsNavModifierComponent.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> NavModifierPrimitives;
    
    URsNavModifierComponent();
    UFUNCTION(BlueprintCallable)
    void AddNavModifierPrimitives(TArray<UPrimitiveComponent*> InNavModifierPrimitives);
    
};

