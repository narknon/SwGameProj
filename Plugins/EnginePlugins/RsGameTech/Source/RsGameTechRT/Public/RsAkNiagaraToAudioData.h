#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RsAkNiagaraToAudioData.generated.h"

class UAkAudioEvent;
class UNiagaraSystem;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAkNiagaraToAudioData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnActivateAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnDeactivateAudioEvent;
    
    FRsAkNiagaraToAudioData();
};

