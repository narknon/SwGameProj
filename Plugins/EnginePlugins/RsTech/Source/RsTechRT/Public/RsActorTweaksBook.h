#pragma once
#include "CoreMinimal.h"
#include "RsSimulationAnalysisTweaks.h"
#include "RsTweaksBook.h"
#include "RsUsingTweaks.h"
#include "RsActorTweaksBook.generated.h"

class URsMotionParmTweaksBook;

UCLASS(Blueprintable, NonTransient)
class URsActorTweaksBook : public URsTweaksBook {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsUsingTweaks UsingTweaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsSimulationAnalysisTweaks AnalysisTweaks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsMotionParmTweaksBook* MotionTweaks;
    
    URsActorTweaksBook();
};

