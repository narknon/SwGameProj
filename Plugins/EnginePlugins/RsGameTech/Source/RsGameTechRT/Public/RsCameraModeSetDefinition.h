#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsCameraModeSetDefinition.generated.h"

class URsCameraModeDefinition;

UCLASS(Blueprintable)
class URsCameraModeSetDefinition : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsCameraModeDefinition*> ModeDefinitions;
    
public:
    URsCameraModeSetDefinition();
};

