#pragma once
#include "CoreMinimal.h"
#include "SwBaseCustomSetting.h"
#include "SwCustomSettingFloat.generated.h"

USTRUCT(BlueprintType)
struct FSwCustomSettingFloat : public FSwBaseCustomSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float Data;
    
    SWGAME_API FSwCustomSettingFloat();
};

