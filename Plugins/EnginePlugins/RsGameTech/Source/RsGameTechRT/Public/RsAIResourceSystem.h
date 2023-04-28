#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "RsAIResourceSystem.generated.h"

class URsAIResource;

UCLASS(Blueprintable)
class URsAIResourceSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftClassPath> ResourceClassNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsAIResource*> Resources;
    
public:
    URsAIResourceSystem();
};

