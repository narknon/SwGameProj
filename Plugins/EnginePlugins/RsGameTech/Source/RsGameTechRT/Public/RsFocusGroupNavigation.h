#pragma once
#include "CoreMinimal.h"
#include "RsBitfield_UINavigationInput.h"
#include "RsFocusGroupNavigation.generated.h"

USTRUCT(BlueprintType)
struct FRsFocusGroupNavigation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 FocusGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_UINavigationInput NavigationInput;
    
    RSGAMETECHRT_API FRsFocusGroupNavigation();
};

