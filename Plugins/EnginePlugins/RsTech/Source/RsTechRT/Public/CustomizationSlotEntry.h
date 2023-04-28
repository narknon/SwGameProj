#pragma once
#include "CoreMinimal.h"
#include "CustomizationSlotEntry.generated.h"

class URsCustomizationPiece;

USTRUCT(BlueprintType)
struct FCustomizationSlotEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsCustomizationPiece* ReferenceToPiece;
    
    RSTECHRT_API FCustomizationSlotEntry();
};

