#pragma once
#include "CoreMinimal.h"
#include "SwBaseCustomSetting.h"
#include "SwCustomSettingBool.generated.h"

USTRUCT(BlueprintType)
struct FSwCustomSettingBool : public FSwBaseCustomSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool Data;
    
    SWGAME_API FSwCustomSettingBool();
};

