#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERsConstrainedJumpDirection.h"
#include "RsConstrainedJumpPadMapping.h"
#include "RsGlobalJumpData.h"
#include "RsJumpSettings.generated.h"

class UAnimSequenceBase;
class URsBasicJumpDefinition;
class URsChimneyJumpDefinition;
class URsConstrainedJumpDefinition;
class URsDoubleJumpDefinition;
class URsHeroStateModifierDefinition;
class URsPhysicalAnimationProfile;
class URsSlideJumpDefinition;
class URsSwingBeamJumpDefinition;
class URsWallJumpDefinition;
class URsWallScurryJumpDefinition;

UCLASS(Blueprintable)
class URsJumpSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsGlobalJumpData GlobalJumpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsBasicJumpDefinition* BasicJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsSlideJumpDefinition* SlideJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallScurryJumpWallProximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWallScurryJumpDefinition* WallScurryJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsSwingBeamJumpDefinition* SwingBeamJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWallJumpDefinition* WallJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsChimneyJumpDefinition* ChimneyJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsDoubleJumpDefinition* DoubleJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsConstrainedJumpPadMapping> ConstrainedJumpPadMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsConstrainedJumpDefinition* ConstrainedJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsConstrainedJumpDefinition* ConstrainedDoubleJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConstrainedDoubleJumpWaitForAscendNotify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsConstrainedJumpDirection, UAnimSequenceBase*> ConstrainedDoubleJumpAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstrainedDoubleJumpAnimationBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConstrainedDoubleJumpAnimationBlendOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* ConstrainedJumpNoGripDisableGrabModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPhysicalAnimationProfile* PhysicalAnimationProfileConstrainedJump;
    
    URsJumpSettings();
};

