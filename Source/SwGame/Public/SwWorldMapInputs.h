#pragma once
#include "CoreMinimal.h"
#include "SwWorldMapRawInputs.h"
#include "SwWorldMapInputs.generated.h"

USTRUCT(BlueprintType)
struct FSwWorldMapInputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwWorldMapRawInputs RawInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsInputEnabled: 1;
    
    SWGAME_API FSwWorldMapInputs();
};

