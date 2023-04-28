#pragma once
#include "CoreMinimal.h"
#include "RsWorldStateNodeChangedDelegateDelegate.h"
#include "RsWorldStateNodeInstance.generated.h"

class URsWorldStateNodeTypeInstanceData;

USTRUCT(BlueprintType)
struct RSWORLDSTATEPLUGIN_API FRsWorldStateNodeInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCompletedPersistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCompletedUnsaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsWorldStateNodeTypeInstanceData* NodeTypeSpecificData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsWorldStateNodeChangedDelegate> OnCompletionChangedDelegates;
    
    FRsWorldStateNodeInstance();
};

