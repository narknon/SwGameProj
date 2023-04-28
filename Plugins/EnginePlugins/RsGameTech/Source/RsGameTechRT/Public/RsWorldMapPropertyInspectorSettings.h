#pragma once
#include "CoreMinimal.h"
#include "RsWorldMapActorTypeDefaultData.h"
#include "RsWorldMapPropertyInspectorSelectionSettings.h"
#include "RsWorldMapPropertyInspectorSettings.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FRsWorldMapPropertyInspectorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DescriptionTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecondaryPriorityMultipliers[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapActorTypeDefaultData ActorTypeDefaults[20];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsWorldMapPropertyInspectorSelectionSettings SelectionSettings[5];
    
    RSGAMETECHRT_API FRsWorldMapPropertyInspectorSettings();
};

