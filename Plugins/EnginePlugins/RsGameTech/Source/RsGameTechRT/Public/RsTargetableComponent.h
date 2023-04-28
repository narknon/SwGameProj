#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "RsAIFactionChangedEventDelegate.h"
#include "RsAIPreFactionChangeEventDelegate.h"
#include "RsTargetableComponent.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsTargetableComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIPreFactionChangeEvent OnPreFactionChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAIFactionChangedEvent OnFactionChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefaultFactionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBetargeted: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanBePlayerZTargeted: 1;
    
public:
    URsTargetableComponent();
    UFUNCTION(BlueprintCallable)
    void SetFactionTag(FGameplayTag NewFactionTag);
    
    UFUNCTION(BlueprintCallable)
    void ResetFactionTagToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetFactionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetDefaultFactionTag() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllTargetableActors(const UObject* WorldContextObject, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllHostileTargetableActors(const UObject* WorldContextObject, FGameplayTag FactionTag, TArray<AActor*>& OutActors);
    
};

