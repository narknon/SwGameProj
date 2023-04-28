#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameMode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=ERsOnlineAdditionalLocalContentStatus -FallbackName=ERsOnlineAdditionalLocalContentStatus
#include "RsGameModeDeluxeEditionUnlockedSignatureDelegate.h"
#include "RsGameModeEntitlementsChangedSignatureDelegate.h"
#include "RsGameMode.generated.h"

class UEntitlementsQueryCallbackProxy;
class URsSyncManager;

UCLASS(Blueprintable)
class ARsGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsGameModeEntitlementsChangedSignature OnEntitlementsChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsGameModeDeluxeEditionUnlockedSignature OnDeluxeEditionUnlockedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsGameModeDeluxeEditionUnlockedSignature OnDeluxeEditionDownloadedAndInstalledEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsSyncManager* SyncManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSoftClassPath SyncManagerClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEntitlementsQueryCallbackProxy* m_EntitlementsQueryCallbackProxy;
    
public:
    ARsGameMode();
private:
    UFUNCTION(BlueprintCallable)
    void OnUnexpectedPurchaseReceiptCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnQueryEAAccessSubscriptionFinish(const bool bIsAvailable);
    
    UFUNCTION(BlueprintCallable)
    void OnQueryAdditionalLocalContentFinish(const bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void OnDownloadableContentPackageUpdate(const FString& contentItemID, const ERsOnlineAdditionalLocalContentStatus contentStatus);
    
    UFUNCTION(BlueprintCallable)
    void OnDownloadableContentPackageInstallCompleted();
    
    UFUNCTION(BlueprintCallable)
    void OnCacheEntitlements_Success();
    
    UFUNCTION(BlueprintCallable)
    void OnCacheEntitlements_Failure();
    
    UFUNCTION(BlueprintCallable)
    void OnApplicationHasReactivated();
    
    UFUNCTION(BlueprintCallable)
    void OnApplicationHasEnteredForeground();
    
    UFUNCTION(BlueprintCallable)
    void OnApplicationActivationStateChanged(const bool bIsActive);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUsingAlternativeSpawnDefinition(FName CharmTag) const;
    
    UFUNCTION(BlueprintCallable)
    FString GetDeluxeMovieBasePath();
    
};

