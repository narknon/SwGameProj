#pragma once
#include "CoreMinimal.h"
#include "CountryCodeToOverride.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FCountryCodeToOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CountryCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LookupCode;
    
    FCountryCodeToOverride();
};

