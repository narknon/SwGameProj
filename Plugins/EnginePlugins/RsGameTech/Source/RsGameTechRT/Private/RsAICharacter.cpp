#include "RsAICharacter.h"
#include "Templates/SubclassOf.h"

void ARsAICharacter::SetWeaponUnsheathed(bool bIsUnsheathed) {
}

void ARsAICharacter::SetUpdateChildTransformAsleep(bool bCanUpdateChildTransformsAsleep) {
}

void ARsAICharacter::SetClampToNavMeshAdvanced_BluePrint(bool Clamp) {
}

void ARsAICharacter::SetClampToNavMesh_BluePrint(bool Clamp) {
}

void ARsAICharacter::SetCanBeKilledByWater(bool bEnable) {
}

void ARsAICharacter::SetAIToBusy(bool bIsBusy) {
}

bool ARsAICharacter::SetAIBehaviorStateByName(FName NewStateName, bool bRestartState, bool bStackState, bool AssertOnNotFound) {
    return false;
}

void ARsAICharacter::SetAIBehaviorState(URsAIBehaviorState* NewStateTemplate, bool bStackState) {
}

void ARsAICharacter::RemoveSpawnerFromBreakoutGroup(TSoftObjectPtr<ARsAICharacterSpawner> SpawnerToRemove, bool bReciprocal) {
}

void ARsAICharacter::RemoveForbidBindingToNonCinematicSequenceCircumstances(int32 Circumstances) {
}

void ARsAICharacter::RemoveForbidBindingToCinematicSequenceCircumstances(int32 Circumstances) {
}

void ARsAICharacter::RemoveCharacterFromBreakoutGroup(ARsAICharacter* CharacterToRemove, bool bReciprocal) {
}

UAnimMontage* ARsAICharacter::PlayAIConstrainedAnimationWithDynamicTarget(UAnimationAsset* Asset, FRsGeoLocator GeoLocator, FVector TargetDirection, bool bBlendspaceAsSelector, float BlendInTime, float BlendOutTime, FName AnimationSlot, bool PlayRandomAnimation, float StartPosition, float Playrate, float BlendOutTriggerTime, FVector2D BlendSpaceInput) {
    return NULL;
}

UAnimMontage* ARsAICharacter::PlayAIConstrainedAnimation(UAnimationAsset* Asset, FVector TargetLocation, TArray<FVector> AnchorLocations, FVector TargetDirection, bool bBlendspaceAsSelector, float BlendInTime, float BlendOutTime, FName AnimationSlot, bool PlayRandomAnimation, float StartPosition, float Playrate, float BlendOutTriggerTime, FVector2D BlendSpaceInput) {
    return NULL;
}

void ARsAICharacter::PlaceOnNavMeshOnHitGroundEvent_Internal(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity) {
}

bool ARsAICharacter::PlaceOnNavMesh_Blueprint(const FVector& extentMargin) {
    return false;
}

void ARsAICharacter::OnTopologyChangedPrivate(ERsTopologyMode previousMode, ERsTopologyMode newMode, float Proximity) {
}




void ARsAICharacter::OnPostDeath() {
}

void ARsAICharacter::OnPlayerInteractStarted() {
}

void ARsAICharacter::OnPlayerInteractEnded() {
}



void ARsAICharacter::K2_AISleep() {
}

void ARsAICharacter::K2_AISemiSleep() {
}

void ARsAICharacter::K2_AIAwake() {
}

bool ARsAICharacter::IsWeaponUnsheathed() const {
    return false;
}

bool ARsAICharacter::HasAIResource(TSoftClassPtr<URsAIResource> ResourceClass) const {
    return false;
}

FGameplayTag ARsAICharacter::GetSpeakerTagOverride() const {
    return FGameplayTag{};
}

FTransform ARsAICharacter::GetSpawnTransform() const {
    return FTransform{};
}

ARsAISpawner* ARsAICharacter::GetSpawner() const {
    return NULL;
}

bool ARsAICharacter::GetCanBeKilledByWater() const {
    return false;
}

FRsBlueprintableAIDeferredCommandUID ARsAICharacter::GetBlueprintableSpawnCommandUID() {
    return FRsBlueprintableAIDeferredCommandUID{};
}

void ARsAICharacter::ClearForbidBindingToNonCinematicSequenceCircumstances() {
}

void ARsAICharacter::ClearForbidBindingToCinematicSequenceCircumstances() {
}

void ARsAICharacter::ClearBreakoutGroup(bool bReciprocal) {
}

bool ARsAICharacter::CanPlayMontageOnNavMesh(const UAnimMontage* Montage) const {
    return false;
}

bool ARsAICharacter::CanPlayAnimSequenceOnNavMesh(const UAnimSequence* Animation) const {
    return false;
}

void ARsAICharacter::BreakOutOfSequence(bool bBreakOutOtherCharactersInGroup) {
}

void ARsAICharacter::AICharacterIsInWaterStateChanged(ARsCharacter* RsCharacter, ARsNavVolume* Volume, bool bIsAICharacterInWater, bool bWasInWater) {
}

void ARsAICharacter::AddSpawnerToBreakoutGroup(TSoftObjectPtr<ARsAICharacterSpawner> SpawnerToAdd, bool bReciprocal) {
}

void ARsAICharacter::AddForbidBindingToNonCinematicSequenceCircumstances(int32 Circumstances) {
}

void ARsAICharacter::AddForbidBindingToCinematicSequenceCircumstances(int32 Circumstances) {
}

void ARsAICharacter::AddCharacterToBreakoutGroup(ARsAICharacter* CharacterToAdd, bool bReciprocal) {
}

void ARsAICharacter::ActivateBehaviorStateMachine(TSubclassOf<URsAIBehaviorStateMachine> NewAwarenessStateMachine) {
}

ARsAICharacter::ARsAICharacter() {
    // Null default object.
}

