#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "RsCIGTacticsService.h"
#include "SwCIGTacticsService.generated.h"

UCLASS(Blueprintable)
class USwCIGTacticsService : public URsCIGTacticsService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatMoveLocation_ExcludeEnemiesOutsideLeaderRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery CombatMoveLocation_ExcludeEnemiesTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCombatMoveLocation_ClampToBattleBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatMoveLocation_ClampToBattleCenterRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CombatMoveLocation_AvoidBattleCenterLeaderAngle;
    
    USwCIGTacticsService();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatMoveLocationChanged(FVector CombatMoveLocation) const;
    
};

