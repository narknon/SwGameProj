#pragma once
#include "CoreMinimal.h"
#include "ERsAttackerDirection.h"
#include "RsCharacterAnimationData.h"
#include "RsDirectionalAnimData.h"
#include "RsNestedAttackerDirectionAnimData.generated.h"

class URsSyncDefinition;

UCLASS(Blueprintable)
class URsNestedAttackerDirectionAnimData : public URsDirectionalAnimData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<ERsAttackerDirection, URsDirectionalAnimData*> ReactionDataMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCharacterAnimationData DefaultAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsSyncDefinition* DefaultSyncDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseReactorAsMasterForSync;
    
public:
    URsNestedAttackerDirectionAnimData();
};

