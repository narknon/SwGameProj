#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EHavokClothThreadingMode.h"
#include "HavokClothSettings.generated.h"

UCLASS(Blueprintable)
class UHavokClothSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BaseFPS;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MinFPS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdaptConstraintStiffness;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStepInEditor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxConstraintStiffnessFactor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubstepWhenBelowBaseFPS;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxSubsteps;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrameTimeSmoothingFactor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddWorldCollidablesAutomatically;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHavokClothThreadingMode DefaultThreadingModel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultTaskQueueMaxThreads;
    
    UHavokClothSettings();
};

