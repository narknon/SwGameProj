#pragma once
#include "CoreMinimal.h"
#include "RsLoadStreamingDefinitionResultDelegate.generated.h"

class URsStreamingDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRsLoadStreamingDefinitionResult, const TArray<URsStreamingDefinition*>&, Definitions);

