#pragma once
#include "CoreMinimal.h"
#include "SwBaseCustomSetting.h"
#include "SwCustomSettingString.generated.h"

USTRUCT(BlueprintType)
struct FSwCustomSettingString : public FSwBaseCustomSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString Data;
    
    SWGAME_API FSwCustomSettingString();
};

