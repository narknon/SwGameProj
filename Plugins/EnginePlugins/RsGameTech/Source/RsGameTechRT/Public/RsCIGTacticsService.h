#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsCIGTacticsService.generated.h"

UCLASS(Blueprintable)
class URsCIGTacticsService : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickDelay;
    
    URsCIGTacticsService();
};

