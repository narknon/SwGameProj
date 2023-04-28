#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsPhysicsAssetCustomizationForPhysicalAnimation.h"
#include "RsPhysicsAssetCustomizationForRagdoll.h"
#include "RsPhysicsAssetCustomization.generated.h"

UCLASS(Blueprintable)
class URsPhysicsAssetCustomization : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicsAssetCustomizationForPhysicalAnimation PhysicalAnimationCustomization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsPhysicsAssetCustomizationForRagdoll RagdollCustomization;
    
    URsPhysicsAssetCustomization();
};

