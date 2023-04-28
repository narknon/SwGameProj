#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "RsLimbDismembermentData.generated.h"

class AActor;
class UParticleSystem;

USTRUCT(BlueprintType)
struct FRsLimbDismembermentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DismemberActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActorSpawnImpulse;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHaveRandomAngularImpulse;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomAngularImpulseMagnitude;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ActorSpawnAngularImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeSpan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* DismemberParticleEffect;
    
    RSGAMETECHRT_API FRsLimbDismembermentData();
};

