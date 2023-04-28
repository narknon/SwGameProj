#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsAITeamSystem.generated.h"

class UBehaviorTree;
class URsAITeam;

UCLASS(Blueprintable)
class URsAITeamSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* TeamRootBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsAITeam*> Teams;
    
public:
    URsAITeamSystem();
};

