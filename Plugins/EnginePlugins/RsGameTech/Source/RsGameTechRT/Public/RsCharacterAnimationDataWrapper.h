#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsCharacterAnimationData.h"
#include "RsCharacterAnimationDataWrapper.generated.h"

class URsCharacterAnimationDataWrapper;

UCLASS(Blueprintable)
class URsCharacterAnimationDataWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData AnimData;
    
    URsCharacterAnimationDataWrapper();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URsCharacterAnimationDataWrapper* SpawnCharacterAnimationDataWrapper(const FRsCharacterAnimationData& NewAnimData);
    
};

