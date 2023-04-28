#pragma once
#include "CoreMinimal.h"
#include "ERsAIResourceLockoutMode.h"
#include "RsAIResource.h"
#include "RsAIResource_Timer.generated.h"

UCLASS(Blueprintable)
class URsAIResource_Timer : public URsAIResource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LockoutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIResourceLockoutMode::Type> LockoutMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRandomTime;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRandomTime;
    
public:
    URsAIResource_Timer();
};

