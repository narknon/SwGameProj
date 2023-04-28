#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameplayTagContainer.h"
#include "RsTagQuerySet_QueryInfo.h"
#include "RsTagQuerySetDefinition.generated.h"

class URsTagQuerySetDefinition;
class UScriptStruct;

UCLASS(Blueprintable)
class URsTagQuerySetDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* ResultStructClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FRsTagQuerySet_QueryInfo> Queries;
    
    URsTagQuerySetDefinition();
    UFUNCTION(BlueprintCallable)
    static void CalculateResults(URsTagQuerySetDefinition* QuerySet, const FGameplayTagContainer& Tags, FGenericStruct& ReturnValue);
    
};

