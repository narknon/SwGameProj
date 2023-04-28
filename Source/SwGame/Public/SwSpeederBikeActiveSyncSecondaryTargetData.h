#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeActiveSyncSecondaryTargetData.generated.h"

class UAnimMontage;
class USceneComponent;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeActiveSyncSecondaryTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* m_OtherCharacterAttachParentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_NewOtherCharacterAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_NewOtherSpeederBikeAnimMontage;
    
    FSwSpeederBikeActiveSyncSecondaryTargetData();
};

