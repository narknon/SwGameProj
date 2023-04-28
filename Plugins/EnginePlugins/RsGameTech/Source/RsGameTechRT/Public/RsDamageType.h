#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "ERsCharacterReaction.h"
#include "RsHitEvent.h"
#include "Templates/SubclassOf.h"
#include "RsDamageType.generated.h"

class AActor;

UCLASS(Blueprintable)
class URsDamageType : public UDamageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> ReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsHitEvent HitData;
    
    URsDamageType();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ERsCharacterReaction GetReaction(AActor* DamageCauser) const;
    
};

