#pragma once
#include "CoreMinimal.h"
#include "ButtonMashSyncGroupParameters.h"
#include "ButtonMashType.h"
#include "ButtonMashSyncGroup.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SWGAME_API UButtonMashSyncGroup : public UButtonMashType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SyncGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonMashSyncGroupParameters SyncGroupData;
    
    UButtonMashSyncGroup();
};

