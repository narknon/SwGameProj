#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Types/SlateEnums.h"
#include "SwMeditationTrainingCellSelectedChangedDelegate.h"
#include "SwMeditationTrainingGridSetting.h"
#include "SwMeditationTrainingGridSizePreset.h"
#include "Templates/SubclassOf.h"
#include "SwMeditationTrainingGrid.generated.h"

class ASwMeditationTrainingCamera;
class ASwMeditationTrainingCursor;
class ASwMeditationTrainingGridCell;

UCLASS(Blueprintable)
class SWGAME_API ASwMeditationTrainingGrid : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingCellSelectedChanged OnCellSelectedChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwMeditationTrainingGridSizePreset> GridSizePresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwMeditationTrainingGridSetting Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASwMeditationTrainingGridCell> GridCellClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyGridNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwMeditationTrainingCamera* MeditationCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASwMeditationTrainingCursor* MeditationCursor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVector2D, ASwMeditationTrainingGridCell*> Cells;
    
public:
    ASwMeditationTrainingGrid();
    UFUNCTION(BlueprintCallable)
    void MoveSelection(EUINavigation Direction);
    
    UFUNCTION(BlueprintCallable)
    FName GetLabelForGridSize(FIntPoint GridSize);
    
    UFUNCTION(BlueprintCallable)
    void Display(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ClearCells();
    
};

