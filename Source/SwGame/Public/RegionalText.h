#pragma once
#include "CoreMinimal.h"
#include "RegionalText.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FRegionalText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LookupCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    FRegionalText();
};

