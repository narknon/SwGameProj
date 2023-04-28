#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsConditionalTargetAnimNotify -FallbackName=RsConditionalTargetAnimNotify
#include "ERsAttackSwingDirection.h"
#include "ERsCharacterDefense.h"
#include "RsAnimNotify_VictimEvade.generated.h"

UCLASS(Blueprintable)
class URsAnimNotify_VictimEvade : public URsConditionalTargetAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsAttackSwingDirection AttackDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsCharacterDefense DefenseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    URsAnimNotify_VictimEvade();
};

