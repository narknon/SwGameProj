#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapSectionColorMapping.h"
#include "RsWorldMapLevelColorMapping.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapLevelColorMapping {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapSectionColorMapping SectionMappings[12];
    
    RSGAMETECHRT_API FRsWorldMapLevelColorMapping();
};

