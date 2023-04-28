#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwSpeederBikeVectorParams.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeVectorParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Boost;
    
    FSwSpeederBikeVectorParams();
};

