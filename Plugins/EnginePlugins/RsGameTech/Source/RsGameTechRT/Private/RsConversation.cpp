#include "RsConversation.h"

void ARsConversation::StopConversation(bool bEndedNaturally) {
}

void ARsConversation::StartConversation() {
}

void ARsConversation::SkipToNextLine() {
}

void ARsConversation::OnConversationActorTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void ARsConversation::OnConversationActorDiving(ERsSwimState previousSwimState, ERsSwimState newSwimState) {
}

void ARsConversation::OnConversationActorDied(AActor* DeathActor) {
}

void ARsConversation::OnConversationActorDestroyed(AActor* DestroyedActor) {
}

void ARsConversation::MakeInteractionChoice(int32 ChoiceIndex) {
}

bool ARsConversation::IsWaitingForInteraction() {
    return false;
}

TSoftObjectPtr<UDialogue> ARsConversation::GetDialogue() {
    return NULL;
}

UAkComponent* ARsConversation::GetCurrentSpeakingAkComponent() const {
    return NULL;
}

AActor* ARsConversation::GetCurrentSpeakingActor() const {
    return NULL;
}

int32 ARsConversation::GetConversationId() const {
    return 0;
}

ARsConversation::ARsConversation() {
    // Null default object.
}

