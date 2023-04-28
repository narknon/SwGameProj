#pragma once
#include "CoreMinimal.h"
#include "ECustomizationSlot.h"
#include "RsCustomizationSlot.generated.h"

class UHavokClothEntityComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FRsCustomizationSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECustomizationSlot::Type> SlotType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHavokClothEntityComponent* HavokClothComponent;
    
    RSTECHRT_API FRsCustomizationSlot();
};

