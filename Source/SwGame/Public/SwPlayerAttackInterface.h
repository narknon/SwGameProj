#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RsCharacterAnimationData.h"
#include "Templates/SubclassOf.h"
#include "SwPlayerAttackInterface.generated.h"

class USwAttackState;

UINTERFACE(Blueprintable, MinimalAPI)
class USwPlayerAttackInterface : public UInterface {
    GENERATED_BODY()
};

class ISwPlayerAttackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayerAttackINT(const FRsCharacterAnimationData& AnimData, TSubclassOf<USwAttackState> DescriptionOverride);
    
};

