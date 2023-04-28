#pragma once
#include "CoreMinimal.h"
#include "ESwForceTargetHighlightType.h"
#include "SwForcePingResults.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FSwForcePingResults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwForceTargetHighlightType HighlightType;
    
    SWGAME_API FSwForcePingResults();
};

