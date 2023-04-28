#pragma once
#include "CoreMinimal.h"
#include "ERsRumorType.h"
#include "SwWorldMapRumorStateData.h"
#include "SwWorldMapRumorBundle.generated.h"

USTRUCT(BlueprintType)
struct FSwWorldMapRumorBundle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSwWorldMapRumorStateData Pending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSwWorldMapRumorStateData Tracked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSwWorldMapRumorStateData> Untracked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName DesiredTrackedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ERsRumorType RumorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldHaveUntracked;
    
    SWGAME_API FSwWorldMapRumorBundle();
};

