#pragma once
#include "CoreMinimal.h"
#include "ERsTKPushPullDoorState.h"
#include "RsModelSwapActor.h"
#include "RsModelSwapData.h"
#include "RsTKPushPullDoorActor.generated.h"

UCLASS(Blueprintable)
class SWGAME_API ARsTKPushPullDoorActor : public ARsModelSwapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsModelSwapData ModelSwapOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsModelSwapData ModelSwapBent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsModelSwapData ModelSwapDented;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsTKPushPullDoorState> DoorState;
    
public:
    ARsTKPushPullDoorActor();
    UFUNCTION(BlueprintCallable)
    void SwapDented();
    
    UFUNCTION(BlueprintCallable)
    void SwapBent();
    
    UFUNCTION(BlueprintCallable)
    void SetSimulatingPhysics(bool Enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSimulatingPhysics() const;
    
};

