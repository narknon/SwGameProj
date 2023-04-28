#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_RsIkBoneTypes.generated.h"

USTRUCT(BlueprintType)
struct FRsBitfield_RsIkBoneTypes {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 Bits;
    
    RSGAMETECHRT_API FRsBitfield_RsIkBoneTypes();
};

