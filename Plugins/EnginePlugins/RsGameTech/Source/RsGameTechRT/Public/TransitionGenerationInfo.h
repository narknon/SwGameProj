#pragma once
#include "CoreMinimal.h"
#include "TransitionGenerationInfo.generated.h"

USTRUCT(BlueprintType)
struct FTransitionGenerationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DestState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName K2_TransitionFuncName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName K2_TransitionActionFuncName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPreEvalTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAutomaticTransitionRule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunOnEndOnBeginForPreEval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBidirectional;
    
    RSGAMETECHRT_API FTransitionGenerationInfo();
};

