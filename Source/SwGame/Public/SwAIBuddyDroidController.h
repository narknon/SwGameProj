#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SwAIBuddyDroidOverchargeBehavior.h"
#include "SwAIController.h"
#include "SwOnBuddyWaitingForActionKeyEventDelegate.h"
#include "SwAIBuddyDroidController.generated.h"

class ARsCharacter;
class UBehaviorTree;

UCLASS(Blueprintable)
class ASwAIBuddyDroidController : public ASwAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DefaultOverchargeBehaviorTreeAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTree* DefaultOverchargeBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwAIBuddyDroidOverchargeBehavior> OverchargeBehaviorTreeList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwOnBuddyWaitingForActionKeyEvent OnBuddyStartWaitingForActionKey;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwOnBuddyWaitingForActionKeyEvent OnBuddyEndWaitingForActionKey;
    
    ASwAIBuddyDroidController();
    UFUNCTION(BlueprintCallable)
    void SignalDroidForAction();
    
    UFUNCTION(BlueprintCallable)
    void ResetActionKeySignal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForActionKeySignal() const;
    
    UFUNCTION(BlueprintCallable)
    void ExecuteOverchargeBehavior(ARsCharacter* OverchargeTarget);
    
};

