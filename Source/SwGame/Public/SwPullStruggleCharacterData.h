#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "SwPullStruggleCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FSwPullStruggleCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData EnterLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData Success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData Drop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StruggleDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUnclampToNavMeshAfterEnter;
    
    SWGAME_API FSwPullStruggleCharacterData();
};

