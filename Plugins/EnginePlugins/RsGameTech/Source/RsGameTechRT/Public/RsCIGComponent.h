#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "ERsCIGMatchLeaderMode.h"
#include "Templates/SubclassOf.h"
#include "RsCIGComponent.generated.h"

class URsCIGTacticsService;
class URsMotionParmTweaksBook;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsCIGComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsCIGTacticsService> InitialTacticsService;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsCIGTacticsService* TacticsService;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsMotionParmTweaksBook* MatchLeaderBook;
    
public:
    URsCIGComponent();
    UFUNCTION(BlueprintCallable)
    void SetTacticsService(TSubclassOf<URsCIGTacticsService> TacticsServiceClass);
    
    UFUNCTION(BlueprintCallable)
    bool IsMatchLeaderModeEnabled(ERsCIGMatchLeaderMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void EnableMatchLeaderMode(ERsCIGMatchLeaderMode Mode, FVector ModeSetting);
    
    UFUNCTION(BlueprintCallable)
    void DisableMatchLeaderMode(ERsCIGMatchLeaderMode Mode);
    
};

