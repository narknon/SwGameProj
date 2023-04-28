#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERsChemistryFlammableColliderType.h"
#include "RsChemistryFlammablePropagationSettings.generated.h"

USTRUCT(BlueprintType)
struct FRsChemistryFlammablePropagationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanPropagate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsChemistryFlammableColliderType PropagationColliderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PropagationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PropagationExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PropagationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeIgnitedViaPropagation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoundsExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgnitionTime;
    
    RSGAMETECHRT_API FRsChemistryFlammablePropagationSettings();
};

