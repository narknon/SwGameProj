#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SwPlayerAttackAnimInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USwPlayerAttackAnimInterface : public UInterface {
    GENERATED_BODY()
};

class ISwPlayerAttackAnimInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAnimIsBlocking(bool enable);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetAnimIsBlocking() const;
    
};

