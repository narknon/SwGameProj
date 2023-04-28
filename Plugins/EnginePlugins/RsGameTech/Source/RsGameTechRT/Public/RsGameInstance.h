#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Templates/SubclassOf.h"
#include "RsGameInstance.generated.h"

class ARsMissionObjectiveSystemBase;
class ARsWorldMapHologramBase;
class UDataTable;
class URAPSystem;
class URsCIGSystem;
class URsGlobalSaveDataBase;
class URsNarrativeSystem;
class URsSaveGameMetaDataObject;
class URsTelemetryLogger;
class URsWorldMap;
class URsWorldStateAudioSystem;
class URsZiplineManager;

UCLASS(Blueprintable)
class URsGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ImpactEffectsSurfaceTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ImpactEffectsCharacterTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsWorldMap* RsWorldMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsWorldMapHologramBase* Holomap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsMissionObjectiveSystemBase* MissionObjectiveSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsZiplineManager* ZiplineManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsNarrativeSystem> NarrativeSystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsCIGSystem> CIGSystemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsGlobalSaveDataBase> GlobalSaveDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsSaveGameMetaDataObject> SaveMetaDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsWorldStateAudioSystem> WorldStateAudioSystemClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URAPSystem* RAPSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsNarrativeSystem* RsNarrativeSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsCIGSystem* RsCIGSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsWorldStateAudioSystem* RsWorldStateAudioSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsTelemetryLogger* TelemetryLogger;
    
public:
    URsGameInstance();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLocaleUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsTelemetryLogger* GetTelemetryLogger() const;
    
    UFUNCTION(BlueprintCallable)
    URsNarrativeSystem* GetRsNarrativeSystem() const;
    
    UFUNCTION(BlueprintCallable)
    URsCIGSystem* GetRsCIGSystem() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URAPSystem* GetRAPSystem() const;
    
};

