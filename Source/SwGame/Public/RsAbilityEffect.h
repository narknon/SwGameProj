#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsAbilityEffect.generated.h"

UCLASS(Blueprintable)
class URsAbilityEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* AbilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRenewable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanIgnoreSyncs;
    
    URsAbilityEffect();
    UFUNCTION(BlueprintCallable)
    void BlueprintDeactivate();
    
};

