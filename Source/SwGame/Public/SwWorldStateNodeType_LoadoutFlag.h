#pragma once
#include "CoreMinimal.h"
#include "ERsHeroLoadoutFlags.h"
#include "RsBitfield_HeroLoadoutFlags.h"
#include "RsWorldStateNodeType.h"
#include "SwWorldStateNodeType_LoadoutFlag.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USwWorldStateNodeType_LoadoutFlag : public URsWorldStateNodeType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsHeroLoadoutFlags flag;
    
    USwWorldStateNodeType_LoadoutFlag();
private:
    UFUNCTION(BlueprintCallable)
    void OnLoadoutFlagChanged(FRsBitfield_HeroLoadoutFlags OldFlags, FRsBitfield_HeroLoadoutFlags NewFlags);
    
};

