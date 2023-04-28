#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsAICharacterRelationshipDescriptor.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAICharacterRelationshipDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RelationshipTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alignment;
    
    FRsAICharacterRelationshipDescriptor();
};

