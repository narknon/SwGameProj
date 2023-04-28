#pragma once
#include "CoreMinimal.h"
#include "SwBaseCustomSetting.h"
#include "SwCustomSettingInt.generated.h"

USTRUCT(BlueprintType)
struct FSwCustomSettingInt : public FSwBaseCustomSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 Data;
    
    SWGAME_API FSwCustomSettingInt();
};

