#pragma once
#include "CoreMinimal.h"
#include "RAPLineData.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "RAPDebugCategoryTagDialogueList.h"
#include "RAPDialogueMetaData.h"
#include "RAPGameplayTagMapping.h"
#include "RAPDatabase.generated.h"

class UDialogue;

UCLASS(Blueprintable)
class URAPDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FRAPLineData> Lines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UDialogue>, FRAPDialogueMetaData> DialogueMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRAPGameplayTagMapping> EventContextsForSpeakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRAPDebugCategoryTagDialogueList> DebugCategoryTagsToDialogueLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, TSoftObjectPtr<UDialogue>> SceneIDsToDialogues;
    
    URAPDatabase();
    UFUNCTION(BlueprintCallable)
    FRAPLineData PullIGCManualLineData(int32 UID);
    
};

