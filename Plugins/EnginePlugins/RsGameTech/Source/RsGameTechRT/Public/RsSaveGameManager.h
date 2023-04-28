#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RsSaveGameManagerBase -FallbackName=RsSaveGameManagerBase
#include "RsActorRecord.h"
#include "RsSaveGameInfo.h"
#include "Templates/SubclassOf.h"
#include "RsSaveGameManager.generated.h"

class AActor;
class URsGlobalSaveDataBase;
class URsSaveGameMetaDataObject;
class URsSaveGameObject;

UCLASS(Blueprintable)
class URsSaveGameManager : public URsSaveGameManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsGlobalSaveDataBase* GlobalSaveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsSaveGameObject* CurrentSaveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<URsSaveGameMetaDataObject> MetaDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, URsSaveGameMetaDataObject*> SaveMetaDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FRsActorRecord> ActorRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, FRsActorRecord> PendingActorRecords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<AActor>> PendingBeginPlayActorsToSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRsSaveGameInfo> CachedSaveSlotInfo;
    
public:
    URsSaveGameManager();
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldStatePostSaveGameLoadStart();
    
    UFUNCTION(BlueprintCallable)
    void OnWorldStatePostSaveGameLoadEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnRegisteredActorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

