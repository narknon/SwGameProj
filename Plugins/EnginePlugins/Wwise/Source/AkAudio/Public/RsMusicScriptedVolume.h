#pragma once
#include "CoreMinimal.h"
#include "RsMusicVolume.h"
#include "RsMusicScriptedVolume.generated.h"

UCLASS(Blueprintable)
class ARsMusicScriptedVolume : public ARsMusicVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReenableOnHeroDeath;
    
    ARsMusicScriptedVolume();
};

