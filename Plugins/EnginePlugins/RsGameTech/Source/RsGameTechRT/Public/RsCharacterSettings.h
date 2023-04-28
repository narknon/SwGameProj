#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsCharacterTypeDescriptor.h"
#include "RsCharacterSettings.generated.h"

UCLASS(Blueprintable)
class URsCharacterSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsCharacterTypeDescriptor> CharacterTypes;
    
    URsCharacterSettings();
};

