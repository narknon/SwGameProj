#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERsWorldMapSectionColorType.h"
#include "RsWorldMapColorPaletteGrouping.generated.h"

UCLASS(Blueprintable)
class URsWorldMapColorPaletteGrouping : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERsWorldMapSectionColorType> SectionTypes;
    
    URsWorldMapColorPaletteGrouping();
};

