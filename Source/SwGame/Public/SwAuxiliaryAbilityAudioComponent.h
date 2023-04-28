#pragma once
#include "CoreMinimal.h"
#include "AkGameObject.h"
#include "SwAuxiliaryAudioData.h"
#include "SwAuxiliaryAbilityAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwAuxiliaryAbilityAudioComponent : public UAkGameObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwAuxiliaryAudioData> AuxiliaryAudioData;
    
    USwAuxiliaryAbilityAudioComponent();
};

