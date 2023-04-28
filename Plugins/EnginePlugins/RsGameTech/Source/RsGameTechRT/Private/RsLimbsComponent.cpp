#include "RsLimbsComponent.h"
#include "Templates/SubclassOf.h"

void URsLimbsComponent::SpawnDismemberedLimb(const FGameplayTag LimbTag) {
}

void URsLimbsComponent::SetLimbVisibility(const FGameplayTag LimbTag, bool bVisible) {
}

void URsLimbsComponent::SetLimbDismembermentData(const FGameplayTag LimbTag, const FRsLimbDismembermentData& DismembermentData) {
}

void URsLimbsComponent::SetLimbCollision(const FGameplayTag LimbTag, TEnumAsByte<ECollisionEnabled::Type> CollisionType) {
}

void URsLimbsComponent::RegisterLimb(const FRsLimbInfo& LimbInfo) {
}

float URsLimbsComponent::ReduceLimbHealth(const FGameplayTag LimbTag, const FRsDamageInfo& DamageInfo) {
    return 0.0f;
}

float URsLimbsComponent::KillLimb(const FGameplayTag LimbTag, TSubclassOf<UDamageType> DamageTypeClass, AActor* DamageCauser, AController* DamageInstigator, const FRsDamageParams& DamageParams) {
    return 0.0f;
}

bool URsLimbsComponent::IsLimbAlive(const FGameplayTag LimbTag) const {
    return false;
}

TArray<FGameplayTag> URsLimbsComponent::GetRegisteredLimbTags() const {
    return TArray<FGameplayTag>();
}

float URsLimbsComponent::GetLimbHealth(const FGameplayTag LimbTag) const {
    return 0.0f;
}

AController* URsLimbsComponent::GetLastDamageInstigator() const {
    return NULL;
}

FRsDamageInfo URsLimbsComponent::GetLastDamageInfo() const {
    return FRsDamageInfo{};
}

AActor* URsLimbsComponent::GetLastDamageCauser() const {
    return NULL;
}

FGameplayTag URsLimbsComponent::FindLimbWithCollider(const UPrimitiveComponent* Collider) const {
    return FGameplayTag{};
}

URsLimbsComponent::URsLimbsComponent() {
    // Null default object.
}

