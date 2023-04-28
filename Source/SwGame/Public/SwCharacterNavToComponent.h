#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ERsCombatState.h"
#include "RsHeroComponent.h"
#include "ESwCharacterNavToEndReason.h"
#include "ESwCharacterNavToMobility.h"
#include "OnSwCharacterNavToEndDelegate.h"
#include "SwCharacterNavToParams.h"
#include "SwCharacterNavToComponent.generated.h"

class AActor;
class ARsCharacter;
class ISwCharacterDynamicNavToHandler;
class USwCharacterDynamicNavToHandler;
class URsHeroStateModifierDefinition;
class USceneComponent;
class USwCharacterDynamicNavToHandlerObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwCharacterNavToComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsHeroStateModifierDefinition* DefaultNavToHeroStateModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwCharacterNavToParams DefaultNavToParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInComingCurveSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USwCharacterDynamicNavToHandlerObject* DynamicNavToHandlerObject;
    
public:
    USwCharacterNavToComponent();
    UFUNCTION(BlueprintCallable)
    bool UpdateNavToTargetOrientation(const FRotator InTargetOrientation);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateNavToTargetLocation(const FVector InTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateNavToParams(const FSwCharacterNavToParams InParams);
    
    UFUNCTION(BlueprintCallable)
    bool TryNavToLocationWithParams(const FVector InTargetLocation, const FRotator InTargetOrientation, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd);
    
    UFUNCTION(BlueprintCallable)
    bool TryNavToLocationByCurveWithParams(const FVector InTargetLocation, const FVector InOutgoingVelocity, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd);
    
    UFUNCTION(BlueprintCallable)
    bool TryNavToLocationByCurve(const FVector InTargetLocation, const FVector InOutgoingVelocity, const FOnSwCharacterNavToEnd& InOnNavToEnd);
    
    UFUNCTION(BlueprintCallable)
    bool TryNavToLocation(const FVector InTargetLocation, const FRotator InTargetOrientation, const FOnSwCharacterNavToEnd& InOnNavToEnd);
    
    UFUNCTION(BlueprintCallable)
    bool TryNavToComponentWithParams(USceneComponent* InTargetComponent, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd, const ESwCharacterNavToMobility InMobility);
    
    UFUNCTION(BlueprintCallable)
    bool TryNavToComponent(USceneComponent* InTargetComponent, const FOnSwCharacterNavToEnd& InOnNavToEnd, const ESwCharacterNavToMobility InMobility);
    
    UFUNCTION(BlueprintCallable)
    bool TryNavToActorWithParams(AActor* InTargetActor, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd, const ESwCharacterNavToMobility InMobility);
    
    UFUNCTION(BlueprintCallable)
    bool TryNavToActor(AActor* InTargetActor, const FOnSwCharacterNavToEnd& InOnNavToEnd, const ESwCharacterNavToMobility InMobility);
    
    UFUNCTION(BlueprintCallable)
    bool TryDynamicNavToWithParams(const TScriptInterface<ISwCharacterDynamicNavToHandler>& InDynamicNavToHandler, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd);
    
    UFUNCTION(BlueprintCallable)
    bool TryDynamicNavTo(const TScriptInterface<ISwCharacterDynamicNavToHandler>& InDynamicNavToHandler, const FOnSwCharacterNavToEnd& InOnNavToEnd);
    
    UFUNCTION(BlueprintCallable)
    bool StartNavTo(const FVector InTargetLocation, const FRotator InTargetOrientation, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd);
    
    UFUNCTION(BlueprintCallable)
    bool StartDynamicNavTo(const TScriptInterface<ISwCharacterDynamicNavToHandler>& InDynamicNavToHandler, const FSwCharacterNavToParams InParams, const FOnSwCharacterNavToEnd& InOnNavToEnd);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNavToStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNavToEnd(const bool bInSuccessful, const ESwCharacterNavToEndReason InReason);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHeroStateModifierRemoved(URsHeroStateModifierDefinition* HeroStateModifier);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterInterrupted(ARsCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterCombatStateChange(ARsCharacter* Character, TEnumAsByte<ERsCombatState::Type> PreviousCombatState, TEnumAsByte<ERsCombatState::Type> NewCombatState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavToInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetNavToTargetOrientation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetNavToTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSwCharacterNavToParams GetNavToParams() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsHeroStateModifierDefinition* GetNavToHeroStateModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNavToElapsedTime() const;
    
    UFUNCTION(BlueprintCallable)
    bool CancelNavTo();
    
};

