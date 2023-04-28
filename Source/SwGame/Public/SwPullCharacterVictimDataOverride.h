#pragma once
#include "CoreMinimal.h"
#include "SwPullCharacterStruggleVictimDataOverride.h"
#include "SwPullCharacterTractorCounterVictimDataOverride.h"
#include "SwPullCharacterTractorVictimDataOverride.h"
#include "SwPullCharacterYankVictimDataOverride.h"
#include "SwPullCharacterVictimDataOverride.generated.h"

USTRUCT(BlueprintType)
struct FSwPullCharacterVictimDataOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride_Yank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullCharacterYankVictimDataOverride Yank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideTractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullCharacterTractorVictimDataOverride Tractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideStruggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullCharacterStruggleVictimDataOverride Struggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverride_TractorCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullCharacterTractorCounterVictimDataOverride TractorCounterOverride;
    
    SWGAME_API FSwPullCharacterVictimDataOverride();
};

