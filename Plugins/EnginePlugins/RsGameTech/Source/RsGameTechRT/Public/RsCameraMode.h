#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsCameraModeData.h"
#include "RsCameraMode.generated.h"

class URsCameraBehavior;
class UWorld;

UCLASS(Blueprintable)
class URsCameraMode : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRsCameraModeData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsCameraBehavior*> POVBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsCameraBehavior*> AccessibilityBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsCameraBehavior*> CollisionBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsCameraBehavior*> DefaultPOVBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsCameraBehavior*> DefaultAccessibilityBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URsCameraBehavior*> DefaultCollisionBehaviors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* CameraManagerWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bBehaviorsDirty;
    
public:
    URsCameraMode();
};

