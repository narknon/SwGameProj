#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RsWorldStateChangedDelegateDelegate.h"
#include "RsWorldStateClearedDelegateDelegate.h"
#include "RsWorldStateErrorDelegateDelegate.h"
#include "RsWorldStateInstance.h"
#include "RsWorldStateSubsystem.generated.h"

class URsWorldStateDefinition;

UCLASS(Blueprintable)
class URsWorldStateSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsWorldStateDefinition* WorldStateDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FRsWorldStateInstance RuntimeInstance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStateChangedDelegate OnWorldStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStateErrorDelegate OnWorldStateError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStateClearedDelegate OnPostWorldStateCleared;
    
    URsWorldStateSubsystem();
};

