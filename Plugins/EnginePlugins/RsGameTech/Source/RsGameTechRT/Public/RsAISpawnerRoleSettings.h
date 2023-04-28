#pragma once
#include "CoreMinimal.h"
#include "ERsAIRole.h"
#include "RsAISpawnerRoleSettings.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAISpawnerRoleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIRole::Type> Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitGuardRadius;
    
    FRsAISpawnerRoleSettings();
};

