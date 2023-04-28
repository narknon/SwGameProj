#pragma once
#include "CoreMinimal.h"
#include "CombatantMusicThreat.generated.h"

USTRUCT(BlueprintType)
struct FCombatantMusicThreat {
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
    
    RSGAMETECHRT_API FCombatantMusicThreat();
};

