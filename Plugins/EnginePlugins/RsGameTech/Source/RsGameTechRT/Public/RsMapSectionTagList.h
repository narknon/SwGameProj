#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsMapSectionTag -FallbackName=RsMapSectionTag
#include "RsMapSectionTagList.generated.h"

USTRUCT(BlueprintType)
struct FRsMapSectionTagList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsMapSectionTag> MapSections;
    
    RSGAMETECHRT_API FRsMapSectionTagList();
};

