#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERsAISoundType.h"
#include "RsSurfaceEffect.h"
#include "RsImpactEffectCharacter.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsImpactEffectCharacter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultVFX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ImpactSound[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateAISound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAISoundType::Type> ImpactSoundAI[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSurfaceEffect ImpactVFX[6];
    
    FRsImpactEffectCharacter();
};

