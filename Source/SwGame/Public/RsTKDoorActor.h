#pragma once
#include "CoreMinimal.h"
#include "RsModelSwapActor.h"
#include "RsModelSwapData.h"
#include "RsTKDoorActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class SWGAME_API ARsTKDoorActor : public ARsModelSwapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsModelSwapData ModelSwapOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsModelSwapData ModelSwapIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnedActorLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
    ARsTKDoorActor();
    UFUNCTION(BlueprintCallable)
    bool SwapAndSpawnObjects();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetSpawnedActors();
    
};

