#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/Scene.h"
#include "RsPostProcessSettingsDefinition.generated.h"

UCLASS(Blueprintable)
class URsPostProcessSettingsDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    URsPostProcessSettingsDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPostProcessSettings GetPostProcessSettings() const;
    
};

