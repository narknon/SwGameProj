#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NarrativeHardRefDatabase.generated.h"

class UAnimationAsset;
class UBlendSpaceBase;
class UDialogue;

UCLASS(Blueprintable)
class UNarrativeHardRefDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UDialogue*> DialogueAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UAnimationAsset*> FacialAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UAnimationAsset*> GesturesAndIdlesAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UBlendSpaceBase*> Blendspaces;
    
    UNarrativeHardRefDatabase();
};

