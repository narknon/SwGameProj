#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsWorldStateQuery.h"
#include "QueryForMusic.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FQueryForMusic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStateQuery WorldStateQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery LevelTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* WorldStateMusicEvent;
    
    AKAUDIO_API FQueryForMusic();
};

