#include "PostEventAsync.h"

UPostEventAsync* UPostEventAsync::PostEventAsync(const UObject* WorldContextObject, UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed) {
    return NULL;
}

void UPostEventAsync::PollPostEventFuture() {
}

UPostEventAsync::UPostEventAsync() {
    // Null default object.
}

