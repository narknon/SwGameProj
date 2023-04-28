#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Rs/RsMapSectionTag.h"
#include "RsSaveGameMetaDataObject.generated.h"

UCLASS(Blueprintable)
class URsSaveGameMetaDataObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag MapSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElapsedPlayTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMainStoryComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsNewGamePlus;
    
    URsSaveGameMetaDataObject();
    UFUNCTION(BlueprintCallable)
    void SetMapSectionFromTag(FRsMapSectionTag MapSectionToSet);
    
    UFUNCTION(BlueprintCallable)
    void SetMapSectionFromNames(FName WorldName, FName RegionName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPreSaveGame();
    
};

