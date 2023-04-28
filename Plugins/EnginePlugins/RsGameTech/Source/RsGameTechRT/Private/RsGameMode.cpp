#include "RsGameMode.h"

void ARsGameMode::OnUnexpectedPurchaseReceiptCompleted() {
}

void ARsGameMode::OnQueryEAAccessSubscriptionFinish(const bool bIsAvailable) {
}

void ARsGameMode::OnQueryAdditionalLocalContentFinish(const bool bWasSuccessful) {
}

void ARsGameMode::OnDownloadableContentPackageUpdate(const FString& contentItemID, const ERsOnlineAdditionalLocalContentStatus contentStatus) {
}

void ARsGameMode::OnDownloadableContentPackageInstallCompleted() {
}

void ARsGameMode::OnCacheEntitlements_Success() {
}

void ARsGameMode::OnCacheEntitlements_Failure() {
}

void ARsGameMode::OnApplicationHasReactivated() {
}

void ARsGameMode::OnApplicationHasEnteredForeground() {
}

void ARsGameMode::OnApplicationActivationStateChanged(const bool bIsActive) {
}

bool ARsGameMode::GetUsingAlternativeSpawnDefinition(FName CharmTag) const {
    return false;
}

FString ARsGameMode::GetDeluxeMovieBasePath() {
    return TEXT("");
}

ARsGameMode::ARsGameMode() {
    // Null default object.
}

