#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeSyncSecondaryTarget.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeSyncSecondaryTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OtherSpeederBike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* OtherCharacter;
    
    FSwSpeederBikeSyncSecondaryTarget();
};

