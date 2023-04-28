#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Rs/EListenerType.h"
#include "Engine/LatentActionManager.h"
#include "AkActionOnEventType.h"
#include "AkChannelConfiguration.h"
#include "AkChannelMask.h"
#include "AkExternalSourceInfo.h"
#include "AkMultiPositionType.h"
#include "AkOutputSettings.h"
#include "EAkCurveInterpolation.h"
#include "OnAkBankCallbackDelegate.h"
#include "OnAkPostEventCallbackDelegate.h"
#include "OnSetCurrentAudioCultureCallbackDelegate.h"
#include "PanningRule.h"
#include "AkGameplayStatics.generated.h"

class AActor;
class UAkAudioBank;
class UAkAudioEvent;
class UAkAudioType;
class UAkAuxBus;
class UAkComponent;
class UAkMediaAsset;
class UAkPortalComponent;
class UAkRoomComponent;
class UAkRtpc;
class UAkStateValue;
class UAkSwitchValue;
class UAkTrigger;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class UAkGameplayStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAkGameplayStatics();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UseReverbVolumes(bool inUseReverbVolumes, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void UseEarlyReflections(AActor* Actor, UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UnloadBankByName(const FString& BankName);
    
    UFUNCTION(BlueprintCallable)
    static void UnloadBankAsync(UAkAudioBank* Bank, const FOnAkBankCallback& BankUnloadedCallback);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void UnloadBank(UAkAudioBank* Bank, const FString& BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopProfilerCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopOutputCapture();
    
    UFUNCTION(BlueprintCallable)
    static void StopAllMenuNarrationEvents();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopAll();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StartProfilerCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StartOutputCapture(const FString& Filename);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAkComponent* SpawnAkComponentAtLocationWithSeek(UObject* WorldContextObject, UAkAudioEvent* AkEvent, float SeekTimeSeconds, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static UAkComponent* SpawnAkComponentAtLocation(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, bool AutoPost, const FString& EventName, bool AutoDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShouldPlaySound(const UAkAudioEvent* Event, const UObject* WorldContextObject, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetSwitchOnComponent(FName SwitchGroup, FName SwitchState, UAkComponent* AkComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetSwitchOnAllActorComponents(const UAkSwitchValue* in_SwitchValue, AActor* Actor, const FString& SwitchGroup, const FString& SwitchState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetSwitch(UAkSwitchValue* SwitchValue, AActor* Actor, FName SwitchGroup, FName SwitchState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetState(UAkStateValue* StateValue, FName StateGroup, FName State);
    
    UFUNCTION(BlueprintCallable)
    static void SetSpeakerAngles(const TArray<float>& SpeakerAngles, float HeightAngle, const FString& DeviceShareset);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetRTPCValueOnAllActorComponents(const UAkRtpc* in_RtpcValue, float Value, AActor* Actor, const FString& RTPC);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32 InterpolationTimeMs, AActor* Actor, FName RTPC);
    
    UFUNCTION(BlueprintCallable)
    static void SetReflectionsOrder(int32 Order, bool RefreshPaths);
    
    UFUNCTION(BlueprintCallable)
    static void SetPortalToPortalObstruction(UAkPortalComponent* PortalComponent0, UAkPortalComponent* PortalComponent1, float ObstructionValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetPortalObstructionAndOcclusion(UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetPanningRule(PanningRule PanRule);
    
    UFUNCTION(BlueprintCallable)
    static void SetOutputDeviceEffect(int32 FXIndex, const FString& SharesetName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetOutputBusVolume(float BusVolume, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void SetOcclusionScalingFactor(float ScalingFactor);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultiplePositions(UAkComponent* GameObjectAkComponent, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultipleChannelMaskEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<FAkChannelMask> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable)
    static void SetMultipleChannelEmitterPositions(UAkComponent* GameObjectAkComponent, TArray<AkChannelConfiguration> ChannelMasks, TArray<FTransform> Positions, AkMultiPositionType MultiPositionType);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetMaterialSwitchOnComponent(UPARAM(Ref) UAkComponent*& AkComponent, float TraceStartDistance, float TraceEndDistance, float RepeatDelay);
    
    UFUNCTION(BlueprintCallable)
    static void SetListenerType(TEnumAsByte<EListenerType> ListenerType, float InterpolationTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool SetLanguageToCurrentCulture(const FString& LanguageName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetGlobalSwitch(FName SwitchGroup, FName SwitchState);
    
    UFUNCTION(BlueprintCallable)
    static void SetGameObjectToPortalObstruction(UAkComponent* GameObjectAkComponent, UAkPortalComponent* PortalComponent, float ObstructionValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentAudioCultureAsync(const FString& AudioCulture, const FOnSetCurrentAudioCultureCallback& Completed);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetCurrentAudioCulture(const FString& AudioCulture, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetBusConfig(const FString& BusName, AkChannelConfiguration ChannelConfiguration);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ResetRTPCValue(UAkRtpc* RTPCValue, int32 InterpolationTimeMs, AActor* Actor, FName RTPC);
    
    UFUNCTION(BlueprintCallable)
    static void ReplaceMainOutput(const FAkOutputSettings& MainOutputSettings);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveDefaultListener(USceneComponent* ListenerComponent);
    
    UFUNCTION(BlueprintCallable)
    static void ReloadAllReferencedBanks();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PostTrigger(UAkTrigger* TriggerValue, AActor* Actor, FName Trigger);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostMusicEvent(UAkAudioEvent* MusicEvent, const FString& MusicEventName);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static int32 PostMenuNarrationEvent(const FString& EventName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostGlobalEvent(UAkAudioEvent* AkEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEventWithSeek(UAkAudioEvent* AkEvent, AActor* Actor, float SeekTimeSeconds, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, bool bStopWhenAttachedToDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEventOnComponentWithSeek(UAkComponent* AkComponent, UAkAudioEvent* AkEvent, float SeekTimeSeconds, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static UAkComponent* PostEventOnComponent(UAkAudioEvent* AkEvent, USceneComponent* AttachToComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PostEventByName(const FString& EventName, AActor* Actor, bool bStopWhenAttachedToDestroyed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEventAttached(UAkAudioEvent* AkEvent, AActor* Actor, FName AttachPointName, bool bStopWhenAttachedToDestroyed, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void PostEventAtLocationByName(const FString& EventName, FVector Location, FRotator Orientation, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static int32 PostEventAtLocation(UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation, const FString& EventName, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostEvent(UAkAudioEvent* AkEvent, AActor* Actor, int32 CallbackMask, const FOnAkPostEventCallback& PostEventCallback, const TArray<FAkExternalSourceInfo>& ExternalSources, bool bStopWhenAttachedToDestroyed, const FString& EventName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static int32 PostDoorEvent(UAkAudioEvent* AkEvent, AActor* Actor, const TArray<FVector>& Offsets);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static void PostAndWaitForEndOfEventAsync(UAkAudioEvent* AkEvent, AActor* Actor, int32& PlayingID, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo"))
    static int32 PostAndWaitForEndOfEvent(UAkAudioEvent* AkEvent, AActor* Actor, bool bStopWhenAttachedToDestroyed, const TArray<FAkExternalSourceInfo>& ExternalSources, const FString& EventName, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayerRespawned(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void PlayerDied();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadInitBank();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadBanks(const TArray<UAkAudioBank*>& SoundBanks, bool SynchronizeSoundBanks);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadBankByName(const FString& BankName);
    
    UFUNCTION(BlueprintCallable)
    static void LoadBankAsync(UAkAudioBank* Bank, const FOnAkBankCallback& BankLoadedCallback);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LoadBank(UAkAudioBank* Bank, const FString& BankName, FLatentActionInfo LatentInfo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsLoadingAudioBanks();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable)
    static void GetSpeakerAngles(TArray<float>& SpeakerAngles, float& HeightAngle, const FString& DeviceShareset);
    
    UFUNCTION(BlueprintCallable)
    static float GetOcclusionScalingFactor();
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<EListenerType> GetListenerType();
    
    UFUNCTION(BlueprintCallable)
    static UAkRoomComponent* GetListenerRoomComponent();
    
    UFUNCTION(BlueprintCallable)
    static void GetListenerPosition(FVector& ListenerPosition, FVector& ListenerFront, FVector& ListenerUp);
    
    UFUNCTION(BlueprintCallable)
    static FString GetListenerAuxBusName();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static FString GetLanguageForCurrentCulture();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentAudioCulture();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAvailableAudioCultures();
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetAkMediaAssetUserData(const UAkMediaAsset* Instance, const UClass* Type);
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* GetAkComponent(const USceneComponent*& AttachToComponent, bool& ComponentCreated, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetAkAudioTypeUserData(const UAkAudioType* Instance, const UClass* Type);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ExecuteActionOnPlayingID(AkActionOnEventType ActionType, int32 PlayingID, int32 TransitionDuration, EAkCurveInterpolation FadeCurve);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ExecuteActionOnEvent(UAkAudioEvent* AkEvent, AkActionOnEventType ActionType, AActor* Actor, int32 TransitionDuration, EAkCurveInterpolation FadeCurve, int32 PlayingID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ClearBanks();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void CancelEventCallback(const FOnAkPostEventCallback& PostEventCallback);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void AddOutputCaptureMarker(const FString& MarkerText);
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* AddHoloTableListener(AActor* OwningActor);
    
    UFUNCTION(BlueprintCallable)
    static UAkComponent* AddDefaultListener(USceneComponent* ListenerComponent);
    
};

