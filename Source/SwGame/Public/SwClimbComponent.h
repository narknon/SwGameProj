#pragma once
#include "CoreMinimal.h"
#include "RsClimbComponent.h"
#include "SwClimbComponent.generated.h"

class USwClimbSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwClimbComponent : public URsClimbComponent {
    GENERATED_BODY()
public:
    USwClimbComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentAttachmentClimbingClawsOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USwClimbSettings* GetSwClimbSettings() const;
    
};

