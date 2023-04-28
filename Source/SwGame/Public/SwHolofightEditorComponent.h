#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwHolofightChallengeData.h"
#include "SwHolofightEditorComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwHolofightEditorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HolofightChallengesDataTable;
    
    USwHolofightEditorComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditor();
    
    UFUNCTION(BlueprintCallable)
    bool AddChallengeToDataTable(const FName ChallengeName, FSwHolofightChallengeData ChallengeData);
    
};

