#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SwProjectileDataManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class USwProjectileDataManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ProjectileDataTable;
    
public:
    USwProjectileDataManager();
};

