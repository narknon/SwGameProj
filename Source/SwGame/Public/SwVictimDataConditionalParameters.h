#pragma once
#include "CoreMinimal.h"
#include "SwVictimDataConditionalParameters.generated.h"

USTRUCT(BlueprintType)
struct FSwVictimDataConditionalParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCharacterInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInDarkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasInSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasInPull;
    
    SWGAME_API FSwVictimDataConditionalParameters();
};

