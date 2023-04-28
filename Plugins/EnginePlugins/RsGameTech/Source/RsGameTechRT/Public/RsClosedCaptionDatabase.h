#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "RsClosedCaptionCommonSubtitleData.h"
#include "RsClosedCaptionEventDelegate.h"
#include "RsClosedCaptionMapping.h"
#include "RsClosedCaptionDatabase.generated.h"

class AActor;
class UAkAudioEvent;
class USceneComponent;

UCLASS(Blueprintable)
class URsClosedCaptionDatabase : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UAkAudioEvent>, FRsClosedCaptionMapping> AkEventsToMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FRsClosedCaptionCommonSubtitleData> CommonSubtitleIdentifiersToData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsClosedCaptionEvent RsClosedCaptionEvent;
    
    URsClosedCaptionDatabase();
    UFUNCTION(BlueprintCallable)
    void PostClosedCaptionForAkEvent(UAkAudioEvent* Event, AActor* Actor, USceneComponent* SceneComponent);
    
};

