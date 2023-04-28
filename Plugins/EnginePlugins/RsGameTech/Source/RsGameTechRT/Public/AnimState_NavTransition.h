#pragma once
#include "CoreMinimal.h"
#include "ERsCharacterNavigationComponentType.h"
#include "AnimState_NavTransition.generated.h"

USTRUCT(BlueprintType)
struct FAnimState_NavTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCharacterNavigationComponentType::Type> FromNavigationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCharacterNavigationComponentType::Type> ToNavigationComponent;
    
    RSGAMETECHRT_API FAnimState_NavTransition();
};

