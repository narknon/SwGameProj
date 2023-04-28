#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SwProjectileTypeName.h"
#include "SwProjectileSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class SWGAME_API USwProjectileSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwProjectileTypeName> ProjectileTypes;
    
    USwProjectileSettings();
};

