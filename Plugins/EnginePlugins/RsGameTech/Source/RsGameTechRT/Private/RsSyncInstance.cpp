#include "RsSyncInstance.h"

void URsSyncInstance::StopSync(bool bKeepPlayingMontage) {
}

void URsSyncInstance::SetBreakOnTakeDamage(TEnumAsByte<ERsBreakSyncType> BreakType) {
}

void URsSyncInstance::OnTakeAnyDamageSetDeathAnimation(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void URsSyncInstance::OnTakeAnyDamageInstance(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void URsSyncInstance::OnTakeAnyDamageAll(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void URsSyncInstance::OnMontageEndedInstance(UAnimMontage* Montage, bool bInterrupted) {
}

void URsSyncInstance::OnMontageEndedAll(UAnimMontage* Montage, bool bInterrupted) {
}

bool URsSyncInstance::IsSyncStopped() {
    return false;
}

URsSyncInstance::URsSyncInstance() {
    // Null default object.
}

