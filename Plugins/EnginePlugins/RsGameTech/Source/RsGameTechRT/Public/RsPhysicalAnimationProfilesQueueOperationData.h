#pragma once
#include "CoreMinimal.h"
#include "FRsPhysicalAnimationProfilesQueueOperation.h"
#include "RsPhysicalAnimationParameters.h"
#include "RsPhysicalAnimationRuntimeProfileParameters.h"
#include "RsPhysicalAnimationProfilesQueueOperationData.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicalAnimationProfilesQueueOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USkeletalMeshComponent> m_SkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationProfilesQueueOperation m_Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationRuntimeProfileParameters m_OperationParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRsPhysicalAnimationParameters m_PhysicalAnimationParameters;
    
    FRsPhysicalAnimationProfilesQueueOperationData();
};

