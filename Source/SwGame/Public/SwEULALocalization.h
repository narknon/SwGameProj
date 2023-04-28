#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SwEULALocalization.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class SWGAME_API USwEULALocalization : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* EULALocalizationTextTable;
    
public:
    USwEULALocalization();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOverrideEULAForEU() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetEULAText(FName TextIdentifier);
    
};

