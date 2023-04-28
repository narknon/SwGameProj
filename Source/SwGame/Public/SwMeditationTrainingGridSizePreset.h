#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwMeditationTrainingGridSizePreset.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwMeditationTrainingGridSizePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LabelLocalized;
    
    FSwMeditationTrainingGridSizePreset();
};

