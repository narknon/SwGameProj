#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERsCharacterType.h"
#include "RsAIVODefinition.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable)
class URsAIVODefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<ERsCharacterType>, UAkAudioEvent*> AlertedVOPerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AlertedVODefault;
    
    URsAIVODefinition();
};

