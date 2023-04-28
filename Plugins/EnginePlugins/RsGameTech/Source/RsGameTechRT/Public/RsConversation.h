#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "ERsSwimState.h"
#include "RsConversationChoiceMadeEventDelegate.h"
#include "RsConversationFinishedEventDelegate.h"
#include "RsConversationLineFinishedEventDelegate.h"
#include "RsConversation.generated.h"

class AController;
class UAkComponent;
class UAnimationAsset;
class UDamageType;
class UDialogue;

UCLASS(Blueprintable)
class ARsConversation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsConversationFinishedEvent OnConversationFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsConversationLineFinishedEvent OnConversationLineFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsConversationLineFinishedEvent OnConversationLineStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsConversationChoiceMadeEvent OnConversationChoiceMadeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EndedNaturally;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDialogue* Dialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNonConversationalEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimationAsset*> LoadedAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* LethalDamageType;
    
public:
    ARsConversation();
    UFUNCTION(BlueprintCallable)
    void StopConversation(bool bEndedNaturally);
    
    UFUNCTION(BlueprintCallable)
    void StartConversation();
    
    UFUNCTION(BlueprintCallable)
    void SkipToNextLine();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnConversationActorTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnConversationActorDiving(ERsSwimState previousSwimState, ERsSwimState newSwimState);
    
    UFUNCTION(BlueprintCallable)
    void OnConversationActorDied(AActor* DeathActor);
    
    UFUNCTION(BlueprintCallable)
    void OnConversationActorDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void MakeInteractionChoice(int32 ChoiceIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsWaitingForInteraction();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UDialogue> GetDialogue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAkComponent* GetCurrentSpeakingAkComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentSpeakingActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConversationId() const;
    
};

