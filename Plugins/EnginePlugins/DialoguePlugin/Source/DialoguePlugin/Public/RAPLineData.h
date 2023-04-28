#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RAPLineData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUEPLUGIN_API FRAPLineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChoicePrompt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SetTagsOnLine;
    
    FRAPLineData();
};

