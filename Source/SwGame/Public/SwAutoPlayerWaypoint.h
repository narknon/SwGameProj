#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESwAutoPlayerActionType.h"
#include "ESwAutoPlayerPathType.h"
#include "SwAutoPlayerWaypointDelegateDelegate.h"
#include "SwAutoPlayerWaypoint.generated.h"

UCLASS(Blueprintable)
class ASwAutoPlayerWaypoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESwAutoPlayerActionType> ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESwAutoPlayerPathType> PathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ToleranceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanVisitDuringCombat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwAutoPlayerWaypointDelegate OnWaypointHit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwAutoPlayerWaypointDelegate ActionComplete;
    
    ASwAutoPlayerWaypoint();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ESwAutoPlayerActionType> GetActionType() const;
    
};

