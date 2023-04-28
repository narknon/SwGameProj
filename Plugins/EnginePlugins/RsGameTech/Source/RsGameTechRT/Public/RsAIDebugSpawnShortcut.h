#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsInputChord.h"
#include "RsAIDebugSpawnShortcut.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAIDebugSpawnShortcut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsInputChord Hotkey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath AICharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistance;
    
    FRsAIDebugSpawnShortcut();
};

