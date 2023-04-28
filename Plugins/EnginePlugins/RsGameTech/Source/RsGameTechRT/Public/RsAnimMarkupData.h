#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERsAnimEndPose.h"
#include "RsAnimMarkupData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAnimMarkupData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsAnimEndPose EndPoseDirectionality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatSuctionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* PostActionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bProgressionHalfway;
    
    FRsAnimMarkupData();
};

