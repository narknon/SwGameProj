#pragma once
#include "CoreMinimal.h"
#include "MiscSectionData.generated.h"

USTRUCT(BlueprintType)
struct RSTECHRT_API FMiscSectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultSectionMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClothSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChunkSection;
    
    FMiscSectionData();
};

