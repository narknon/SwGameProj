#include "RsCIGSystem.h"


void URsCIGSystem::UnregisterCIGCharacter_Implementation(ARsCharacter* Character) {
}

void URsCIGSystem::RegisterCIGCharacter_Implementation(ARsCharacter* Character) {
}

void URsCIGSystem::PathCigAroundObstacles(FVector TargetLocation, ARsCharacter* NewCigCharacter, FVector& OutNewTargetLocation, bool& bOutPathAltered) {
}

void URsCIGSystem::LogDebug(const FString& Message, int32 DetailLevel) {
}


ARsCharacter* URsCIGSystem::GetCIGCharacter_Implementation() {
    return NULL;
}

bool URsCIGSystem::CigProjectPositionToNavmesh(ARsCharacter* NewCigCharacter, const FVector& Position, const FVector& QueryExtent, bool bSkipOverlapCheck, FVector& OutProjectedLocation) {
    return false;
}

bool URsCIGSystem::CigMultiCapsuleTrace(ARsCharacter* NewCigCharacter, const FVector& StartLocation, const FVector& EndLocation, bool bReturnPhysicsMaterial, bool bReturnFaceIndex, TArray<FHitResult>& OutHits) {
    return false;
}

URsCIGSystem::URsCIGSystem() {
    // Null default object.
}

