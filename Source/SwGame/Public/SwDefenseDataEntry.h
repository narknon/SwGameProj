#pragma once
#include "CoreMinimal.h"
#include "SwDefenseDataEntry.generated.h"

class URsDirectionAnimDataAsset;
class USwDefenseState;

USTRUCT(BlueprintType)
struct FSwDefenseDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsDirectionAnimDataAsset* EnterAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsDirectionAnimDataAsset* ContactAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USwDefenseState* DefenseTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateToAttacker;
    
    SWGAME_API FSwDefenseDataEntry();
};

