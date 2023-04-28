#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsStreamingAreaPlayerStart -FallbackName=RsStreamingAreaPlayerStart
#include "RsStreamingAreaPlayerStart.h"
#include "RsWorldStateNodeRef.h"
#include "SwStreamingAreaPlayerStart.generated.h"

class USwPlayerLoadoutOverrideData;

UCLASS(Blueprintable)
class SWGAME_API ASwStreamingAreaPlayerStart : public ARsStreamingAreaPlayerStart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwPlayerLoadoutOverrideData* LoadoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldStateNodeRef> CompletedWorldStateNodes;
    
    ASwStreamingAreaPlayerStart();
};

