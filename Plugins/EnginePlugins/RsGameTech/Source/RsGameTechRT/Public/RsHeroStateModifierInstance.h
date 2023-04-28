#pragma once
#include "CoreMinimal.h"
#include "RsHeroStateModifierInstance.generated.h"

class UObject;
class URsHeroStateModifierDefinition;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsHeroStateModifierInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* Definition;
    
public:
    FRsHeroStateModifierInstance();
};

