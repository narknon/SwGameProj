#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapPropertyInspectorSelectionSettings.generated.h"

USTRUCT(BlueprintType)
struct FRsWorldMapPropertyInspectorSelectionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilDeselection;
    
    RSGAMETECHRT_API FRsWorldMapPropertyInspectorSelectionSettings();
};

