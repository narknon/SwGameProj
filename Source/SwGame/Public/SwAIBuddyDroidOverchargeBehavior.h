#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERsCharacterType.h"
#include "SwAIBuddyDroidOverchargeBehavior.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FSwAIBuddyDroidOverchargeBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsCharacterType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath BehaviorTreeAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    SWGAME_API FSwAIBuddyDroidOverchargeBehavior();
};

