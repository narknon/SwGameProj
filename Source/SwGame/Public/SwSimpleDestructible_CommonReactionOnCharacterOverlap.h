#pragma once
#include "CoreMinimal.h"
#include "SwSimpleDestructible_CommonReactionOnCharacterOverlap.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSimpleDestructible_CommonReactionOnCharacterOverlap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReactOnCharacterOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverlapDetectionComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumCharacterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DamageAppliedToThisDestructibleActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfHitsAppliedToThisDestructibleActor;
    
    FSwSimpleDestructible_CommonReactionOnCharacterOverlap();
};

