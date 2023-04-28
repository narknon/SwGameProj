#pragma once
#include "CoreMinimal.h"
#include "RsDevNetViewport.h"
#include "SwGameViewportClient.generated.h"

UCLASS(Blueprintable)
class USwGameViewportClient : public URsDevNetViewport {
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

