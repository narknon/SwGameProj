#pragma once
#include "CoreMinimal.h"
#include "RsHeroComponent.h"
#include "SwHeroInQuicksandComponent.generated.h"

class ASwQuicksandActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwHeroInQuicksandComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASwQuicksandActor* m_AnticipatedQuicksandActor;
    
public:
    USwHeroInQuicksandComponent();
};

