#pragma once
#include "CoreMinimal.h"
#include "SwBaseCustomSetting.generated.h"

USTRUCT(BlueprintType)
struct FSwBaseCustomSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsCodeType;
    
    SWGAME_API FSwBaseCustomSetting();
};

