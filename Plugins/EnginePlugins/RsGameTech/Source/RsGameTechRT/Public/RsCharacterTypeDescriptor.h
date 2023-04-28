#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterType.h"
#include "RsCharacterTypeDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FRsCharacterTypeDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCharacterType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    RSGAMETECHRT_API FRsCharacterTypeDescriptor();
};

