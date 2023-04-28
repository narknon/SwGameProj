#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsStreamingAreaRef -FallbackName=RsStreamingAreaRef
#include "RsPlayerStartRecord.generated.h"

class URsStreamingDefinition;

USTRUCT(BlueprintType)
struct FRsPlayerStartRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName PlayerStartName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName PlanetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    URsStreamingDefinition* RootStreamingLevelDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSoftObjectPath RootStreamingDefinitionPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTransform PlayerStartTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FRsStreamingAreaRef> StreamingAreas;
    
    RSGAMETECHRT_API FRsPlayerStartRecord();
};

