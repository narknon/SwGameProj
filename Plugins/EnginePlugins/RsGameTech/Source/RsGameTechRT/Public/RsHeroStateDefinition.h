#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERsHeroMotionTweaks.h"
#include "RsHeroStateInfo.h"
#include "RsHeroStateDefinition.generated.h"

UCLASS(Blueprintable)
class URsHeroStateDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERsHeroMotionTweaks> DefaultMotionTweaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRsHeroStateInfo> States;
    
    URsHeroStateDefinition();
};

