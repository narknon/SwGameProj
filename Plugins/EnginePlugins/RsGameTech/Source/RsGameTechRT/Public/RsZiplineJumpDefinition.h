#pragma once
#include "CoreMinimal.h"
#include "RsBPJumpDefinition.h"
#include "RsZiplineJumpTransientData.h"
#include "RsZiplineJumpDefinition.generated.h"

UCLASS(Blueprintable)
class URsZiplineJumpDefinition : public URsBPJumpDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsZiplineJumpTransientData TransientData;
    
    URsZiplineJumpDefinition();
};

