#pragma once
#include "CoreMinimal.h"
#include "SwAttackState.h"
#include "SwAIAttackTableState.generated.h"

class ARsCharacter;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class SWGAME_API USwAIAttackTableState : public USwAttackState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AttackTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartAttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToCheck;
    
    USwAIAttackTableState();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName OverrideNextAttackTableRow(ARsCharacter* TheAttacker, const UDataTable* CurrentAttackTable, FName CurrentRow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OverrideAttackTableData(ARsCharacter* TheAttacker, const UDataTable* CurrentAttackTable, UDataTable*& NewAttackTable);
    
};

