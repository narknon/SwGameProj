#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESwMeditationTrainingHeroModifier.h"
#include "SwMeditationTrainingLayout.generated.h"

USTRUCT(BlueprintType)
struct SWGAME_API FSwMeditationTrainingLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName ArenaName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIntPoint GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<ESwMeditationTrainingHeroModifier> EnabledHeroModifierList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FString> EnemyDefinitionIdentifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FTransform> EnemyTransforms;
    
    FSwMeditationTrainingLayout();
};

