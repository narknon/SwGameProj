#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERsCameraBehaviorCategory.h"
#include "RsCameraModeData.h"
#include "RsCameraModeDefinition.generated.h"

class URsBaseCameraBehaviorDefinition;
class URsCameraMode;

UCLASS(Blueprintable)
class URsCameraModeDefinition : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsCameraModeData Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsBaseCameraBehaviorDefinition*> POVBehaviorDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsBaseCameraBehaviorDefinition*> AccessibilityBehaviorDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URsBaseCameraBehaviorDefinition*> CollisionBehaviorDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URsCameraMode* Mode;
    
public:
    URsCameraModeDefinition();
    UFUNCTION(BlueprintCallable)
    void SetBehaviorEnabled(const URsBaseCameraBehaviorDefinition* BehaviorDefinition, ERsCameraBehaviorCategory Category, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void ResetBehaviorsToDefaults();
    
    UFUNCTION(BlueprintCallable)
    void ReplaceBehavior(const URsBaseCameraBehaviorDefinition* OldBehaviorDefinition, URsBaseCameraBehaviorDefinition* NewBehaviorDefinition, ERsCameraBehaviorCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBehavior(const URsBaseCameraBehaviorDefinition* BehaviorDefinition, ERsCameraBehaviorCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void InsertBehavior(const URsBaseCameraBehaviorDefinition* BehaviorDefinition, int32 Index, ERsCameraBehaviorCategory Category);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsBehavior(const URsBaseCameraBehaviorDefinition* BehaviorDefinition, ERsCameraBehaviorCategory Category) const;
    
};

