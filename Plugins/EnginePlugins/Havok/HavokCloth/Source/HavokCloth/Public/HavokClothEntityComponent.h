#pragma once
#include "CoreMinimal.h"
#include "Components/MeshComponent.h"
#include "HavokClothItem.h"
#include "HavokClothStateChangedSignatureDelegate.h"
#include "HavokClothTransitionFinishedSignatureDelegate.h"
#include "HavokClothTransitionTriggeredSignatureDelegate.h"
#include "HavokClothEntityComponent.generated.h"

class UHavokClothActionBase;
class UHavokClothAsset;
class UHavokClothCollidableBaseComponent;
class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHavokClothEntityComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHavokClothStateChangedSignature OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHavokClothTransitionTriggeredSignature OnTransitionTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHavokClothTransitionFinishedSignature OnTransitionFinished;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHavokClothAsset* ClothAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHavokClothItem> ClothItems;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEntityTransferMotionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntityTransferMotionTranslationalBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntityTransferMotionRotationalBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEntityAdjustConstraintStiffnessForSlowMotion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntitySlowMotionTimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EntityMinSlowMotionTimeScale;
    
public:
    UHavokClothEntityComponent();
    UFUNCTION(BlueprintCallable)
    void TriggerClothTeleport();
    
    UFUNCTION(BlueprintCallable)
    void SetEntityTransferMotionTranslationalBlend(const float BlendValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEntityTransferMotionRotationalBlend(const float BlendValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEntitySlowMotionTimeScale(const float TimeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetEntityMinSlowMotionTimeScale(const float MinTimeScale);
    
    UFUNCTION(BlueprintCallable)
    void SetClothVisibility(int32 ClothIndex, int32 BufferIndex, bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetClothTransition(int32 ClothIndex, int32 TransitionIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetClothStaticCollision(int32 ClothIndex, bool bStaticCollisions);
    
    UFUNCTION(BlueprintCallable)
    bool SetClothStateSimulateOperatorConfig(int32 ClothIndex, int32 ClothStateIndex, int32 SimulateOperatorIndex, int32 ConfigIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetClothState(int32 ClothIndex, int32 StateIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetClothMaterial(int32 SectionIndex, UMaterialInterface* Material);
    
    UFUNCTION(BlueprintCallable)
    void SetClothDynamicCollision(int32 ClothIndex, bool bDynamicCollisions);
    
    UFUNCTION(BlueprintCallable)
    void SetClothAsset(UHavokClothAsset* NewAsset);
    
    UFUNCTION(BlueprintCallable)
    void RemoveWorldCollidable(UHavokClothCollidableBaseComponent* CollidableComponent, int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void RemoveEntityAction(UHavokClothActionBase* Action);
    
    UFUNCTION(BlueprintCallable)
    void RemoveClothAction(int32 ClothIndex, UHavokClothActionBase* Action);
    
    UFUNCTION(BlueprintCallable)
    bool IsSimClothTransferMotionAvailable(int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsCollisionWithWorldCollidablesEnabled(int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    bool IsClothUpdateEnabled(int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumClothItems();
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothTransitionIndexFromName(int32 ClothIndex, const FString& TransitionName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothTransitionIndexByName(int32 ClothIndex, FName TransitionName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothTransitionIndex(int32 ClothIndex, int32 FromStateIndex, int32 ToStateIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothTransition(int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void GetClothStateSimulateOperatorIndices(int32 ClothIndex, int32 ClothStateIndex, TArray<int32>& OutSimulateOperatorIndices);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothStateIndexFromName(int32 ClothIndex, const FString& StateName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothStateIndexByName(int32 ClothIndex, FName StateName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothState(int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothSimulateOperatorConfigIndexFromName(int32 ClothIndex, int32 SimulateOperatorIndex, const FString& ConfigName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothSimulateOperatorConfigIndexByName(int32 ClothIndex, int32 SimulateOperatorIndex, FName ConfigName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothSectionFromDisplayBufferName(const FString& DisplayBufferName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothSectionByDisplayBufferName(FName DisplayBufferName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothNumSimulateOperatorConfigs(int32 ClothIndex, int32 SimulateOperatorIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothIndexFromName(const FString& ClothDataName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetClothIndexByName(FName MeshInstanceName);
    
    UFUNCTION(BlueprintCallable)
    void EnableSimClothTransferMotion(const bool bEnable, int32 ClothIndex, int32 SimClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void EnableEntityTransferMotion(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableEntitySlowMotion(const bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void EnableCollisionWithWorldCollidables(bool bEnableCollision, int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void EnableClothUpdate(int32 ClothIndex, bool bEnableUpdate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClothInstanceTransitionTriggered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClothInstanceStateChanged() const;
    
    UFUNCTION(BlueprintCallable)
    void AddWorldCollidable(UHavokClothCollidableBaseComponent* CollidableComponent, int32 ClothIndex);
    
    UFUNCTION(BlueprintCallable)
    void AddEntityAction(UHavokClothActionBase* Action);
    
    UFUNCTION(BlueprintCallable)
    void AddClothAction(int32 ClothIndex, UHavokClothActionBase* Action);
    
};

