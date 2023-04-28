#pragma once
#include "CoreMinimal.h"
#include "ERsWorldStateNumberComparisonType.h"
#include "RsWorldStateNodeType.h"
#include "RsWorldStateNodeType_Integer.generated.h"

UCLASS(Blueprintable)
class URsWorldStateNodeType_Integer : public URsWorldStateNodeType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueToCompareWithForCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsWorldStateNumberComparisonType> ComparisonTypeForCompletion;
    
    URsWorldStateNodeType_Integer();
};

