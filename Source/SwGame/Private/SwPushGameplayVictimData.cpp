#include "SwPushGameplayVictimData.h"

FSwPushGameplayVictimData::FSwPushGameplayVictimData() {
    this->ForcePushFailureAnimation = NULL;
    this->bShouldForcePushStagger = false;
    this->bShouldForcePushStaggerPutInCombatState = false;
    this->bShouldForcePushHaveBackStagger = false;
    this->bShouldForcePushGlancingPutInCombatState = false;
    this->ForcePushDirectHitEnterAndLoopAnimation = NULL;
    this->ForcePushDirectHitLandAnimation = NULL;
    this->MinAngleOfFallAForAnbimationOffsetDeg = 0.00f;
    this->AngledFallAnimationStartTime = 0.00f;
    this->ForcePushGlancingAnimation = NULL;
    this->bShouldDisableDampingCurve = false;
    this->DampingCurve = NULL;
    this->bCanModifyAngularDampening = false;
    this->bShouldAddToVelocity = false;
    this->VelocityOverTimeDuration = 0.00f;
    this->VelocityOverTimeCurve = NULL;
    this->ForcePushSpeed = 0.00f;
    this->bShouldSimulatePhysics = false;
    this->bShouldDisableGravity = false;
    this->ForcePushDistance = 0.00f;
    this->ForcePushTimeToDestination = 0.00f;
    this->bShouldRotateWhenImmune = false;
    this->bCanStopPush = false;
    this->bShouldGlancingHitsBeDirectHits = false;
    this->bShouldDirectionHaveVariance = false;
    this->DirectDamage = 0.00f;
    this->GlancingDamage = 0.00f;
    this->bShouldHaveMaxPushTime = false;
    this->MaxPushTime = 0.00f;
    this->MaxPushTimeBlendout = 0.00f;
    this->bShouldOverrideSingleTargetPush = false;
    this->bCanPushOnTopOf = false;
    this->bShouldClampToNavMesh = false;
    this->bShouldUsePullPushAngleRemapper = false;
}

