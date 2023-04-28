#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Templates/SubclassOf.h"
#include "SwMeditationTrainingSpectator.generated.h"

class ASpectatorPawn;

UCLASS(Blueprintable)
class SWGAME_API ASwMeditationTrainingSpectator : public APlayerController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpectatorPawn> SpectatorPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpectatorFOV;
    
    ASwMeditationTrainingSpectator();
};

