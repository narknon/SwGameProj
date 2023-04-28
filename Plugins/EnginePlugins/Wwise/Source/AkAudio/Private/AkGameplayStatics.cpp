#include "AkGameplayStatics.h"

void UAkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor) {
}

void UAkGameplayStatics::UseEarlyReflections(AActor* Actor, UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName) {
}

void UAkGameplayStatics::UnloadBankByName(const FString& BankName) {
}

void UAkGameplayStatics::UnloadBankAsync(UAkAudioBank* Bank, const FOnAkBankCallback& BankUnloadedCallback) {
}

void UAkGameplayStatics::UnloadBank(UAkAudioBank* Bank, const FString& BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject) {
}

void UAkGameplayStatics::StopProfilerCapture() {
}

void UAkGameplayStatics::StopOutputCapture() {
}

void UAkGameplayStatics::StopAllMenuNarrationEvents() {
}

void UAkGameplayStatics::StopAll() {
}

void UAkGameplayStatics::StopActor(AActor* Actor) {
}

void UAkGameplayStatics::StartProfilerCapture(const FString& Filename) {
}

void UAkGameplayStatics::StartOutputCapture(const FString& Filename) {
}

UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocationWithSeek(UObject* WorldContextObject, UAkAudioEvent* AkEvent, float SeekTimeSeconds, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy) {
    return NULL;
}

UAkComponent* UAkGameplayStatics::SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy) {
    return NULL;
}

bool UAkGameplayStatics::ShouldPlaySound(const UAkAudioEvent* Event, const UObject* WorldContextObject, const FVector& Location) {
    return false;
}

void UAkGameplayStatics::SetSwitchOnComponent(FName SwitchGroup, FName SwitchState, UAkComponent* AkComponent) {
}

void UAkGameplayStatics::SetSwitchOnAllActorComponents(const UAkSwitchValue* in_SwitchValue, AActor* Actor, const FString& SwitchGroup, const FString& SwitchState) {
}

void UAkGameplayStatics::SetSwitch(UAkSwitchValue* SwitchValue, AActor* Actor, FName SwitchGroup, FName SwitchState) {
}

void UAkGameplayStatics::SetState(UAkStateValue* StateValue, FName StateGroup, FName State) {
}

void UAkGameplayStatics::SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, const FString& DeviceShareset) {
}

void UAkGameplayStatics::SetRTPCValueOnAllActorComponents(const UAkRtpc* in_RtpcValue, float Value, AActor* Actor, const FString& RTPC) {
}

void UAkGameplayStatics::SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, AActor* Actor, FName RTPC) {
}

void UAkGameplayStatics::SetReflectionsOrder(int32 Order, bool RefreshPaths) {
}

void UAkGameplayStatics::SetPortalToPortalObstruction(UAkPortalComponent* PortalComponent0, UAkPortalComponent* PortalComponent1, float ObstructionValue) {
}

void UAkGameplayStatics::SetPortalObstructionAndOcclusion(UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue) {
}

void UAkGameplayStatics::SetPanningRule(PanningRule PanRule) {
}

void UAkGameplayStatics::SetOutputDeviceEffect(int32 FXIndex, const FString& SharesetName) {
}

void UAkGameplayStatics::SetOutputBusVolume(float BusVolume, AActor* Actor) {
}

void UAkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor) {
}

void UAkGameplayStatics::SetMultiplePositions(UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
}

void UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
}

void UAkGameplayStatics::SetMultipleChannelEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType) {
}

void UAkGameplayStatics::SetMaterialSwitchOnComponent(UAkComponent*& AkComponent, float TraceStartDistance, float TraceEndDistance, float RepeatDelay) {
}

void UAkGameplayStatics::SetListenerType(TEnumAsByte<EListenerType> ListenerType, float InterpolationTime) {
}

bool UAkGameplayStatics::SetLanguageToCurrentCulture(const FString& LanguageName) {
    return false;
}

void UAkGameplayStatics::SetGlobalSwitch(FName SwitchGroup, FName SwitchState) {
}

void UAkGameplayStatics::SetGameObjectToPortalObstruction(UAkComponent* GameObjectAkComponent, UAkPortalComponent* PortalComponent, float ObstructionValue) {
}

void UAkGameplayStatics::SetCurrentAudioCultureAsync(const FString& AudioCulture, const FOnSetCurrentAudioCultureCallback& Completed) {
}

void UAkGameplayStatics::SetCurrentAudioCulture(const FString& AudioCulture, FLatentActionInfo LatentInfo, UObject* WorldContextObject) {
}

void UAkGameplayStatics::SetBusConfig(const FString& BusName, AkChannelConfiguration ChannelConfiguration) {
}

void UAkGameplayStatics::ResetRTPCValue(UAkRtpc* RTPCValue, int32 InterpolationTimeMs, AActor* Actor, FName RTPC) {
}

void UAkGameplayStatics::ReplaceMainOutput(const FAkOutputSettings& MainOutputSettings) {
}

void UAkGameplayStatics::RemoveDefaultListener(USceneComponent* ListenerComponent) {
}

void UAkGameplayStatics::ReloadAllReferencedBanks() {
}

void UAkGameplayStatics::PostTrigger(UAkTrigger* TriggerValue, AActor* Actor, FName Trigger) {
}

int32 UAkGameplayStatics::PostMusicEvent(UAkAudioEvent* MusicEvent, const FString& MusicEventName) {
    return 0;
}

int32 UAkGameplayStatics::PostMenuNarrationEvent(const FString& EventName, FLatentActionInfo LatentInfo, UObject* WorldContextObject) {
    return 0;
}

int32 UAkGameplayStatics::PostGlobalEvent(UAkAudioEvent* AkEvent) {
    return 0;
}

int32 UAkGameplayStatics::PostEventWithSeek(UAkAudioEvent* AkEvent, AActor* Actor, float SeekTimeSeconds, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, bool bStopWhenAttachedToDestroyed) {
    return 0;
}

int32 UAkGameplayStatics::PostEventOnComponentWithSeek(UAkComponent* AkComponent, UAkAudioEvent* AkEvent, float SeekTimeSeconds, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback) {
    return 0;
}

UAkComponent* UAkGameplayStatics::PostEventOnComponent(UAkAudioEvent* AkEvent, USceneComponent* AttachToComponent) {
    return NULL;
}

void UAkGameplayStatics::PostEventByName(const FString& EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed) {
}

int32 UAkGameplayStatics::PostEventAttached(UAkAudioEvent* AkEvent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, const FString& EventName) {
    return 0;
}

void UAkGameplayStatics::PostEventAtLocationByName(const FString& EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject) {
}

int32 UAkGameplayStatics::PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject) {
    return 0;
}

int32 UAkGameplayStatics::PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const FString& EventName) {
    return 0;
}

int32 UAkGameplayStatics::PostDoorEvent(UAkAudioEvent* AkEvent, AActor* Actor, const TArray<FVector>& Offsets) {
    return 0;
}

void UAkGameplayStatics::PostAndWaitForEndOfEventAsync(UAkAudioEvent* AkEvent, AActor* Actor, int32& PlayingID, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo) {
}

int32 UAkGameplayStatics::PostAndWaitForEndOfEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, const FString& EventName, FLatentActionInfo LatentInfo) {
    return 0;
}

void UAkGameplayStatics::PlayerRespawned(UObject* WorldContextObject) {
}

void UAkGameplayStatics::PlayerDied() {
}

void UAkGameplayStatics::LoadInitBank() {
}

void UAkGameplayStatics::LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks) {
}

void UAkGameplayStatics::LoadBankByName(const FString& BankName) {
}

void UAkGameplayStatics::LoadBankAsync(UAkAudioBank* Bank, const FOnAkBankCallback& BankLoadedCallback) {
}

void UAkGameplayStatics::LoadBank(UAkAudioBank* Bank, const FString& BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject) {
}

bool UAkGameplayStatics::IsLoadingAudioBanks() {
    return false;
}

bool UAkGameplayStatics::IsGame(UObject* WorldContextObject) {
    return false;
}

bool UAkGameplayStatics::IsEditor() {
    return false;
}

void UAkGameplayStatics::GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, const FString& DeviceShareset) {
}

float UAkGameplayStatics::GetOcclusionScalingFactor() {
    return 0.0f;
}

TEnumAsByte<EListenerType> UAkGameplayStatics::GetListenerType() {
    return ListenerOnCamera;
}

UAkRoomComponent* UAkGameplayStatics::GetListenerRoomComponent() {
    return NULL;
}

void UAkGameplayStatics::GetListenerPosition(FVector& ListenerPosition, FVector& ListenerFront, FVector& ListenerUp) {
}

FString UAkGameplayStatics::GetListenerAuxBusName() {
    return TEXT("");
}

FString UAkGameplayStatics::GetLanguageForCurrentCulture() {
    return TEXT("");
}

FString UAkGameplayStatics::GetCurrentAudioCulture() {
    return TEXT("");
}

TArray<FString> UAkGameplayStatics::GetAvailableAudioCultures() {
    return TArray<FString>();
}

UObject* UAkGameplayStatics::GetAkMediaAssetUserData(const UAkMediaAsset* Instance, const UClass* Type) {
    return NULL;
}

UAkComponent* UAkGameplayStatics::GetAkComponent(const USceneComponent*& AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType) {
    return NULL;
}

UObject* UAkGameplayStatics::GetAkAudioTypeUserData(const UAkAudioType* Instance, const UClass* Type) {
    return NULL;
}

void UAkGameplayStatics::ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, EAkCurveInterpolation FadeCurve) {
}

void UAkGameplayStatics::ExecuteActionOnEvent(UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, AActor* Actor, int32 TransitionDuration, EAkCurveInterpolation FadeCurve, int32 PlayingID) {
}

void UAkGameplayStatics::ClearBanks() {
}

void UAkGameplayStatics::CancelEventCallback(const FOnAkPostEventCallback& PostEventCallback) {
}

void UAkGameplayStatics::AddOutputCaptureMarker(const FString& MarkerText) {
}

UAkComponent* UAkGameplayStatics::AddHoloTableListener(AActor* OwningActor) {
    return NULL;
}

UAkComponent* UAkGameplayStatics::AddDefaultListener(USceneComponent* ListenerComponent) {
    return NULL;
}

UAkGameplayStatics::UAkGameplayStatics() {
    // Null default object.
}

