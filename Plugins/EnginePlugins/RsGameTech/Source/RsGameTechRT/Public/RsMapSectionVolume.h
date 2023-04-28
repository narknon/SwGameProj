#pragma once
#include "CoreMinimal.h"
#include "Rs/RsMapSectionTag.h"
#include "GameFramework/Volume.h"
#include "RsMapSectionVolume.generated.h"

class AActor;

UCLASS(Blueprintable)
class ARsMapSectionVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag MapSectionTag;
    
    ARsMapSectionVolume();
    UFUNCTION(BlueprintCallable)
    void HandleHeroOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
};

