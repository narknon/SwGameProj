#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ERsAISoundType.h"
#include "AnimNotify_AISoundEvent.generated.h"

UCLASS(Blueprintable)
class UAnimNotify_AISoundEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAISoundType::Type> SoundType;
    
    UAnimNotify_AISoundEvent();
};

