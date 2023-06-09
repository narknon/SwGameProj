#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SwDatabankSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class SWGAME_API USwDatabankSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> SoftDatabankURLTable;
    
    USwDatabankSettings();
};

