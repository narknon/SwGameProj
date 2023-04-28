#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SwProjectileTypeName.h"
#include "SwProjectileSettings.generated.h"

UCLASS(Blueprintable)
class USwProjectileSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwProjectileTypeName> ProjectileTypes;
    
    USwProjectileSettings();
};

