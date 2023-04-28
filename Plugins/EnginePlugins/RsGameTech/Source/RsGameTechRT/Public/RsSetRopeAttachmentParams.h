#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsSetRopeAttachmentParams.generated.h"

class URsRopeAttachmentComponent;

USTRUCT(BlueprintType)
struct FRsSetRopeAttachmentParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsRopeAttachmentComponent* RopeAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttachmentPointLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyRotationalConstraint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SwingAxis;
    
    RSGAMETECHRT_API FRsSetRopeAttachmentParams();
};

