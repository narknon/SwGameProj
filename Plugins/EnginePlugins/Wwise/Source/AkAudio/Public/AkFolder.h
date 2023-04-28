#pragma once
#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkFolder.generated.h"

UCLASS(Blueprintable)
class UAkFolder : public UAkAudioType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UnrealFolderPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WwiseFolderPath;
    
    UAkFolder();
};

