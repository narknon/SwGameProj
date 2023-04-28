#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RsDialogueActorType.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUEPLUGIN_API FRsDialogueActorType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterNameTag;
    
    FRsDialogueActorType();
};

