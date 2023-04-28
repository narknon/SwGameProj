#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "DialogueNode.h"
#include "RsDialogueActorType.h"
#include "Dialogue.generated.h"

class UGameInstance;

UCLASS(Blueprintable)
class UDialogue : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogueNode> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SceneID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayTag> CharactersToDialogueEndIdles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameInstance* PersistentGameInstance;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DialogueCompositionHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime GesturesModifiedTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpeakersCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpeakersHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsDialogueActorType> SpeakerList;
    
    UDialogue();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDialogueNode> GetNextNodes(FDialogueNode Node) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDialogueNode GetFirstNode() const;
    
    UFUNCTION(BlueprintCallable)
    void CleanOuter();
    
    UFUNCTION(BlueprintCallable)
    void AssignPersistentOuter(UGameInstance* inGameInstance);
    
};

