#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterWallSide.h"
#include "ERsWallRunEndReason.h"
#include "RsCharacterNavigationComponent.h"
#include "RsWallRunComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsWallRunComponent : public URsCharacterNavigationComponent {
    GENERATED_BODY()
public:
    URsWallRunComponent();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWallRunLost(const ERsWallRunEndReason InReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWallRunFound(const ERsCharacterWallSide InWallSide, const bool bShouldHaveInputGracePeriod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWallRunning() const;
    
};

