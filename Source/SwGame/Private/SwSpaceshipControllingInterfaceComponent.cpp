#include "SwSpaceshipControllingInterfaceComponent.h"

USwSpaceshipControllingInterfaceComponent::USwSpaceshipControllingInterfaceComponent() {
    this->TieFighterHeroStateModifier = NULL;
    this->SteeringStickDeadzone = 0.00f;
    this->ThrottleStrength = 0.00f;
    this->SteeringStrength = 0.00f;
    this->PitchStrength = 0.00f;
    this->MaximumSpeed = 0.00f;
    this->LinearVelocityAlignmentStrength = 0.00f;
    this->AngularVelocityAlignmentStrength = 0.00f;
    this->EnableRightAxisHorizontalBalance = false;
    this->RightAxisHorizontalBalanceSpeed = 0.00f;
    this->RightAxisHorizontalBalanceStrength = 0.00f;
    this->DebugSteeringSwapRotationOrder = false;
}

