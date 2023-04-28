#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsAITeam.generated.h"

class AActor;
class ARsAITeamController;

UCLASS(Blueprintable)
class URsAITeam : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsAITeamController* TeamAIController;
    
public:
    URsAITeam();
private:
    UFUNCTION(BlueprintCallable)
    void OnTeamMemberDied(AActor* DeadActor);
    
    UFUNCTION(BlueprintCallable)
    void OnTeamMemberDestroyed(AActor* DestroyedActor);
    
};

