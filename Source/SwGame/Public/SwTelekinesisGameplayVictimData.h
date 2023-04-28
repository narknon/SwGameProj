#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsCharacterAnimationData.h"
#include "SwTelekinesisControlData.h"
#include "SwTelekinesisGameplayVictimData.generated.h"

USTRUCT(BlueprintType)
struct FSwTelekinesisGameplayVictimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData ForceTelekinesisAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData ForceTelekinesisLandingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForceTelekinesisSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ForceTelekinesisOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldUse180DegreeOrientationSnapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAxisConstrained;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAxisConstraintDistanceFromVictim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAxisConstraintDistanceFromUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldOverrideMovementControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwTelekinesisControlData ControlData;
    
    SWGAME_API FSwTelekinesisGameplayVictimData();
};

