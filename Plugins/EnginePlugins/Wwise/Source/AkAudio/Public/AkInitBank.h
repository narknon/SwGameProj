#pragma once
#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "AkInitBank.generated.h"

UCLASS(Blueprintable)
class UAkInitBank : public UAkAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AvailableAudioCultures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultLanguage;
    
    UAkInitBank();
};

