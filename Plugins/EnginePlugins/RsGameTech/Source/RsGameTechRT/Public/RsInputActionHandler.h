#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RsFunctionReference.h"
#include "RsBitfield_HeroInputFlags.h"
#include "RsBitfield_HeroLoadoutFlags.h"
#include "RsBitfield_NavState.h"
#include "RsInputActionHandler.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsInputActionHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsFunctionReference OnActionFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_NavState RequiredNavStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroInputFlags RequiredInputFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsBitfield_HeroLoadoutFlags RequiredLoadoutFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredHeroUpgradeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> RequiredHeldInputActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery RequiredTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsFunctionReference CustomCanPerformActionCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsFunctionReference PreQueueActionCheck;
    
    FRsInputActionHandler();
};

