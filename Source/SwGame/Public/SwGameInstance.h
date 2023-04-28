#pragma once
#include "CoreMinimal.h"
#include "RsGameInstance.h"
#include "PlatformDelegateDelegate.h"
#include "SwGameInstance.generated.h"

class URsAbilitySystem;
class USwProjectileDataManager;
class USwSpeederBikeSyncSystem;

UCLASS(Blueprintable)
class USwGameInstance : public URsGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsAbilitySystem* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USwProjectileDataManager* ProjectileDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USwSpeederBikeSyncSystem* SpeederBikeSyncSystem;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformDelegate ApplicationHasDeactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlatformDelegate ApplicationHasActivatedDelegate;
    
    USwGameInstance();
};

