#pragma once
#include "CoreMinimal.h"
#include "RsMusicThreatContributor.generated.h"

USTRUCT(BlueprintType)
struct AKAUDIO_API FRsMusicThreatContributor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CombatantName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MusicThreat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTargetedCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerReachableCooldown;
    
    FRsMusicThreatContributor();
};

