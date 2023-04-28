#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsAINavLinkCharacterDescriptor.h"
#include "RsAINavLinkDefinition.generated.h"

UCLASS(Blueprintable)
class URsAINavLinkDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAINavLinkCharacterDescriptor> CharacterDescriptors;
    
    URsAINavLinkDefinition();
};

