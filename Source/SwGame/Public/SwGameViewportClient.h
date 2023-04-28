#pragma once
#include "CoreMinimal.h"
#include "RsDevNetViewport.h"
#include "SwGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class SWGAME_API USwGameViewportClient : public URsDevNetViewport {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLatchedForceShadedUnlit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLatchedEnableDecals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
public:
    USwGameViewportClient();
};

