#pragma once
#include "CoreMinimal.h"
#include "AkGameplayTypes.h"
#include "Components/ActorComponent.h"
#include "RsAudioBoneTrackingData.h"
#include "RsProceduralBoneMovementAudioComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsProceduralBoneMovementAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FramesCountBetweenRTPCUpdates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAudioBoneTrackingData MovementTrackingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAudioBoneTrackingData> BoneTrackingData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseHighestValueInsteadOfAverage;
    
    URsProceduralBoneMovementAudioComponent();
    UFUNCTION(BlueprintCallable)
    void TickBypass(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnAudioBankLoaded(EAkResult InResult);
    
};

