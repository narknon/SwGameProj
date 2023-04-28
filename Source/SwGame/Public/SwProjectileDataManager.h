#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SwProjectileDataManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class SWGAME_API USwProjectileDataManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ProjectileDataTable;
    
public:
    USwProjectileDataManager();
};

