#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SwAutoPlayerNavZone.h"
#include "SwAutoPlayerNavigationData.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwAutoPlayerNavigationData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSwAutoPlayerNavZone> NavigationZones;
    
    USwAutoPlayerNavigationData();
};

