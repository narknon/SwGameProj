#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwWorldMapRumorBundle.h"
#include "SwWorldMapRumorComponent.generated.h"

class URsWorldMap;
class USwWorldMapHologramSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwWorldMapRumorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBountiesBeUntracked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsWorldMap* RsWorldMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwWorldMapHologramSettings* RuntimeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSwWorldMapRumorBundle Rumor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSwWorldMapRumorBundle Bounty;
    
public:
    USwWorldMapRumorComponent();
};

