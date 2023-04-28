#pragma once
#include "CoreMinimal.h"
#include "SwQuicksandSettings.h"
#include "SwQuicksandInfluencePerType.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct SWGAME_API FSwQuicksandInfluencePerType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwQuicksandSettings SettingsPerType;
    
    FSwQuicksandInfluencePerType();
};

