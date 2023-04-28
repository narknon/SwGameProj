#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsOnLevelLoadedDelegates.h"
#include "RsWorldMap.generated.h"

class URsStreamingDefinition;

UCLASS(Blueprintable)
class URsWorldMap : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsOnLevelLoadedDelegates> OneOffLevelLoadedDelegates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsStreamingDefinition*> PreloadedStreamingDefinitions;
    
public:
    URsWorldMap();
};

