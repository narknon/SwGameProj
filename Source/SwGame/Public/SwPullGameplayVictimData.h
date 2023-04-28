#pragma once
#include "CoreMinimal.h"
#include "ESwPullVictimType.h"
#include "SwPullCharacterData.h"
#include "SwPullLevelObjectData.h"
#include "SwPullGameplayVictimData.generated.h"

USTRUCT(BlueprintType)
struct FSwPullGameplayVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwPullVictimType PullType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideWithAirPullType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwPullVictimType AirPullType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideWithDarkModePullType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwPullVictimType DarkModePullType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullLevelObjectData LevelObjectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwPullCharacterData CharacterData;
    
    SWGAME_API FSwPullGameplayVictimData();
};

