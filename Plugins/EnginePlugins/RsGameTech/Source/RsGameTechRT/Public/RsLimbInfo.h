#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsLimbInfo.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FRsLimbInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LimbTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> LimbColliders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LimbBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowDamageAfterDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlsoDamageParent;
    
    RSGAMETECHRT_API FRsLimbInfo();
};

