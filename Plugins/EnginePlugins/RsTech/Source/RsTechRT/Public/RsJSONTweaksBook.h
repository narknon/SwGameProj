#pragma once
#include "CoreMinimal.h"
#include "RsTweaksBook.h"
#include "RsJSONTweaksBook.generated.h"

UCLASS(Blueprintable, NonTransient)
class URsJSONTweaksBook : public URsTweaksBook {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JsonSource;
    
public:
    URsJSONTweaksBook();
};

