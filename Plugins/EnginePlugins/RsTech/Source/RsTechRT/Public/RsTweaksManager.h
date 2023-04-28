#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsTweaksManager.generated.h"

class URsTweaksBook;

UCLASS(Blueprintable)
class URsTweaksManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, URsTweaksBook*> Index;
    
public:
    URsTweaksManager();
};

