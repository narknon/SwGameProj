#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RsDefendableInterface.generated.h"

class ARsCharacter;

UINTERFACE(Blueprintable)
class URsDefendableInterface : public UInterface {
    GENERATED_BODY()
};

class IRsDefendableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnParried(ARsCharacter* DefendingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEvaded(ARsCharacter* DefendingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBlocked(ARsCharacter* DefendingActor, bool bIsBlockBreak);
    
};

