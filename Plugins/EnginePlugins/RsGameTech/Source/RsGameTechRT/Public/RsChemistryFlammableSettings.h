#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsChemistryFlammablePropagationSettings.h"
#include "RsChemistryFlammableSettings.generated.h"

UCLASS(Blueprintable)
class URsChemistryFlammableSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalBurnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeExtinguishedExternally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReignitable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsChemistryFlammablePropagationSettings PropagationSettings;
    
    URsChemistryFlammableSettings();
};

