#pragma once
#include "CoreMinimal.h"
#include "RsIKModifier.h"
#include "RsIKOverride.h"
#include "RsIKOverrideModifier.generated.h"

UCLASS(Blueprintable)
class URsIKOverrideModifier : public URsIKModifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsIKOverride Override;
    
    URsIKOverrideModifier();
};

