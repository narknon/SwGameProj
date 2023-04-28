#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RsDirectionAnimDataAsset.generated.h"

class URsDirectionalAnimData;

UCLASS(Blueprintable)
class URsDirectionAnimDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    URsDirectionalAnimData* AnimType;
    
    URsDirectionAnimDataAsset();
};

