#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterType.h"
#include "RsCharacterAnimSoftReferencingData.h"
#include "RsAICharacterAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FRsAICharacterAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCharacterType> CharacterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimSoftReferencingData AnimationData;
    
    RSGAMETECHRT_API FRsAICharacterAnimationData();
};

