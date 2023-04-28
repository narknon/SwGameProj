#pragma once
#include "CoreMinimal.h"
#include "Rs/RsMapSectionTag.h"
#include "RsWorldStateNodeRef.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapFocusTargetActor.generated.h"

UCLASS(Blueprintable)
class ARsWorldMapFocusTargetActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldStateNodeRef RequiredWorldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag MapSectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    ARsWorldMapFocusTargetActor();
};

