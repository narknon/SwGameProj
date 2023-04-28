#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERsCharacterReaction.h"
#include "RsReactionDefinitionData.h"
#include "Templates/SubclassOf.h"
#include "RsCharacterReactionDefinition.generated.h"

class UDamageType;

UCLASS(Blueprintable)
class URsCharacterReactionDefinition : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UDamageType>, ERsCharacterReaction> DamageToReactionMapping;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERsCharacterReaction, FRsReactionDefinitionData> ReactionDataContainer;
    
    URsCharacterReactionDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsCharacterReaction GetReactionFromDamageType(const UDamageType* DamageType) const;
    
};

