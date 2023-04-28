#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsConditionalAnimNotifyState -FallbackName=RsConditionalAnimNotifyState
#include "RsAnimNotifyState_DisableBlock.generated.h"

UCLASS(Blueprintable)
class URsAnimNotifyState_DisableBlock : public URsConditionalAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowGlancingBlow;
    
public:
    URsAnimNotifyState_DisableBlock();
};

