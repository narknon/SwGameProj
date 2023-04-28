#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FSwSpeederBikeWallCollisionType.h"
#include "SwSpeederBikeWallCollisionInfo.generated.h"

USTRUCT(BlueprintType)
struct FSwSpeederBikeWallCollisionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeInContact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollisionNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollisionLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSwSpeederBikeWallCollisionType CollisionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScraping;
    
    SWGAME_API FSwSpeederBikeWallCollisionInfo();
};

