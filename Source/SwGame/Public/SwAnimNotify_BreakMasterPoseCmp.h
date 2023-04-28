#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "DismembermentConfiguration.h"
#include "DismemberMode.h"
#include "SwAnimNotify_BreakMasterPoseCmp.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SWGAME_API USwAnimNotify_BreakMasterPoseCmp : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<DismemberMode> DismembermentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDismembermentConfiguration> configs;
    
    USwAnimNotify_BreakMasterPoseCmp();
};

