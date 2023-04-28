#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterType.h"
#include "RsAINavLinkAnimSetDescriptor.h"
#include "RsAINavLinkCharacterDescriptor.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAINavLinkCharacterDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAINavLinkAnimSetDescriptor LeftToRightAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAINavLinkAnimSetDescriptor RightToLeftAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCharacterType> CharacterType;
    
    FRsAINavLinkCharacterDescriptor();
};

