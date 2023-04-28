#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "AkAudioObstructionData.h"
#include "AkAudioPhysicsMaterialToObstructionData.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable)
class UAkAudioPhysicsMaterialToObstructionData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPhysicalMaterial*, FAkAudioObstructionData> PhysicsMaterialToObstructionDataMap;
    
    UAkAudioPhysicsMaterialToObstructionData();
};

