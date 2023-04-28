#pragma once
#include "CoreMinimal.h"
#include "RsCharacterAnimationData.h"
#include "SwDefenseState.h"
#include "SwPlayerDefenseState.generated.h"

class URsHeroStateModifierDefinition;

UCLASS(Blueprintable)
class USwPlayerDefenseState : public USwDefenseState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnEnterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData BlockEnterData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActivateNathanAnimGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsHeroStateModifierDefinition*> ModifierDefinitionList;
    
public:
    USwPlayerDefenseState();
};

