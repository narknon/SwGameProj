#pragma once
#include "CoreMinimal.h"
#include "RsPhysicalAnimationAttachedActor.generated.h"

class AActor;
class URsPhysicalAnimationComponent;
class URsPhysicalMotionAnalyzerComponent;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsPhysicalAnimationAttachedActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_AttachedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URsPhysicalMotionAnalyzerComponent* m_AttachedActorRsPhysicalMotionAnalyzerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationComponent* m_AttachedActorRsPhysicalAnimationComponent;
    
    FRsPhysicalAnimationAttachedActor();
};

