#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SwUICameraController.generated.h"

class ARsCameraManager;
class UPlayer;

UCLASS(Blueprintable)
class ASwUICameraController : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* OriginalController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPlayer* OriginalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsCameraManager* RsCameraManager;
    
public:
    ASwUICameraController();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARsCameraManager* GetRsCameraManager() const;
    
};

