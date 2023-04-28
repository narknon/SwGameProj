#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "RsPerformanceIndicatorOverlayBase.generated.h"

class URsPerformanceIndicatorBase;

UCLASS(Blueprintable)
class URsPerformanceIndicatorOverlayBase : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URsPerformanceIndicatorBase*> Indicators;
    
public:
    URsPerformanceIndicatorOverlayBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowRsWorldMemIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowRsWorldEnvironmentProcessingIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowRsWorldEnvironmentDensityIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowRsWorldDynamicEnvironmentIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowRsWorldApplySimulationIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowRsWorldActiveAIIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowRsWorldActiveActorsIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowNavMeshGenIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowGPUMemIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowGCIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowDDCIndicator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStatsChanged(const TArray<FText>& StatsShort, const TArray<FText>& StatsMedium, const TArray<FText>& StatsLong);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetOverlayVisibility() const;
    
};

