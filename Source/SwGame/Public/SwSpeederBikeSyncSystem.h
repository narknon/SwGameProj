#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SwSpeederBikeActiveSyncData.h"
#include "SwSpeederBikeSyncSystem.generated.h"

UCLASS(Blueprintable)
class SWGAME_API USwSpeederBikeSyncSystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSwSpeederBikeActiveSyncData> m_ActiveSyncs;
    
public:
    USwSpeederBikeSyncSystem();
};

