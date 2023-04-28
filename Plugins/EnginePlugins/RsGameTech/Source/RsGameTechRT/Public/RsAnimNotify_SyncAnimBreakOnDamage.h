#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ERsBreakSyncType.h"
#include "RsAnimNotify_SyncAnimBreakOnDamage.generated.h"

UCLASS(Blueprintable)
class URsAnimNotify_SyncAnimBreakOnDamage : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsBreakSyncType> OnTakeDamageBreakType;
    
public:
    URsAnimNotify_SyncAnimBreakOnDamage();
};

