#pragma once
#include "CoreMinimal.h"
#include "Rs/RsMapSectionTag.h"
#include "GameplayTagContainer.h"
#include "ERsWorldMapLevelType.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapSavePointActor.generated.h"

UCLASS(Blueprintable)
class ARsWorldMapSavePointActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag MapSectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FastTravelLevelTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FastTravelEnabled;
    
    ARsWorldMapSavePointActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartTransitionTo(ERsWorldMapLevelType InLevelType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndTransitionTo(ERsWorldMapLevelType InLevelType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsMapSectionTag GetMapSectionTag() const;
    
};

