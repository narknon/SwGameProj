#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "NiagaraDataInterfaceSwPoisonFog.generated.h"

class UObject;

UCLASS(Blueprintable)
class UNiagaraDataInterfaceSwPoisonFog : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EffectDataInterface;
    
    UNiagaraDataInterfaceSwPoisonFog();
};

