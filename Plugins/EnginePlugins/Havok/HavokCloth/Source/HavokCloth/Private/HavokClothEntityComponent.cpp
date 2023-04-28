#include "HavokClothEntityComponent.h"

void UHavokClothEntityComponent::TriggerClothTeleport() {
}

void UHavokClothEntityComponent::SetEntityTransferMotionTranslationalBlend(const float BlendValue) {
}

void UHavokClothEntityComponent::SetEntityTransferMotionRotationalBlend(const float BlendValue) {
}

void UHavokClothEntityComponent::SetEntitySlowMotionTimeScale(const float TimeScale) {
}

void UHavokClothEntityComponent::SetEntityMinSlowMotionTimeScale(const float MinTimeScale) {
}

void UHavokClothEntityComponent::SetClothVisibility(int32 ClothIndex, int32 BufferIndex, bool bIsVisible) {
}

void UHavokClothEntityComponent::SetClothTransition(int32 ClothIndex, int32 TransitionIndex) {
}

void UHavokClothEntityComponent::SetClothStaticCollision(int32 ClothIndex, bool bStaticCollisions) {
}

bool UHavokClothEntityComponent::SetClothStateSimulateOperatorConfig(int32 ClothIndex, int32 ClothStateIndex, int32 SimulateOperatorIndex, int32 ConfigIndex) {
    return false;
}

void UHavokClothEntityComponent::SetClothState(int32 ClothIndex, int32 StateIndex) {
}

void UHavokClothEntityComponent::SetClothMaterial(int32 SectionIndex, UMaterialInterface* Material) {
}

void UHavokClothEntityComponent::SetClothDynamicCollision(int32 ClothIndex, bool bDynamicCollisions) {
}

void UHavokClothEntityComponent::SetClothAsset(UHavokClothAsset* NewAsset) {
}

void UHavokClothEntityComponent::RemoveWorldCollidable(UHavokClothCollidableBaseComponent* CollidableComponent, int32 ClothIndex) {
}

void UHavokClothEntityComponent::RemoveEntityAction(UHavokClothActionBase* Action) {
}

void UHavokClothEntityComponent::RemoveClothAction(int32 ClothIndex, UHavokClothActionBase* Action) {
}

bool UHavokClothEntityComponent::IsSimClothTransferMotionAvailable(int32 ClothIndex, int32 SimClothIndex) {
    return false;
}

bool UHavokClothEntityComponent::IsCollisionWithWorldCollidablesEnabled(int32 ClothIndex) {
    return false;
}

bool UHavokClothEntityComponent::IsClothUpdateEnabled(int32 ClothIndex) {
    return false;
}

int32 UHavokClothEntityComponent::GetNumClothItems() {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothTransitionIndexFromName(int32 ClothIndex, const FString& TransitionName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothTransitionIndexByName(int32 ClothIndex, FName TransitionName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothTransitionIndex(int32 ClothIndex, int32 FromStateIndex, int32 ToStateIndex) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothTransition(int32 ClothIndex) {
    return 0;
}

void UHavokClothEntityComponent::GetClothStateSimulateOperatorIndices(int32 ClothIndex, int32 ClothStateIndex, TArray<int32>& OutSimulateOperatorIndices) {
}

int32 UHavokClothEntityComponent::GetClothStateIndexFromName(int32 ClothIndex, const FString& StateName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothStateIndexByName(int32 ClothIndex, FName StateName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothState(int32 ClothIndex) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothSimulateOperatorConfigIndexFromName(int32 ClothIndex, int32 SimulateOperatorIndex, const FString& ConfigName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothSimulateOperatorConfigIndexByName(int32 ClothIndex, int32 SimulateOperatorIndex, FName ConfigName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothSectionFromDisplayBufferName(const FString& DisplayBufferName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothSectionByDisplayBufferName(FName DisplayBufferName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothNumSimulateOperatorConfigs(int32 ClothIndex, int32 SimulateOperatorIndex) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothIndexFromName(const FString& ClothDataName) {
    return 0;
}

int32 UHavokClothEntityComponent::GetClothIndexByName(FName MeshInstanceName) {
    return 0;
}

void UHavokClothEntityComponent::EnableSimClothTransferMotion(const bool bEnable, int32 ClothIndex, int32 SimClothIndex) {
}

void UHavokClothEntityComponent::EnableEntityTransferMotion(const bool bEnable) {
}

void UHavokClothEntityComponent::EnableEntitySlowMotion(const bool bEnable) {
}

void UHavokClothEntityComponent::EnableCollisionWithWorldCollidables(bool bEnableCollision, int32 ClothIndex) {
}

void UHavokClothEntityComponent::EnableClothUpdate(int32 ClothIndex, bool bEnableUpdate) {
}



void UHavokClothEntityComponent::AddWorldCollidable(UHavokClothCollidableBaseComponent* CollidableComponent, int32 ClothIndex) {
}

void UHavokClothEntityComponent::AddEntityAction(UHavokClothActionBase* Action) {
}

void UHavokClothEntityComponent::AddClothAction(int32 ClothIndex, UHavokClothActionBase* Action) {
}

UHavokClothEntityComponent::UHavokClothEntityComponent() {
    // Null default object.
}

