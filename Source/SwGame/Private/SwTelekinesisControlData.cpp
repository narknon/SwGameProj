#include "SwTelekinesisControlData.h"

FSwTelekinesisControlData::FSwTelekinesisControlData() {
    this->MaxDepthDistance = 0.00f;
    this->MaxHeightDistance = 0.00f;
    this->MaxStartLateralDistance = 0.00f;
    this->MaxEndLateralDistance = 0.00f;
    this->MaxHeight = 0.00f;
    this->MinHeight = 0.00f;
    this->HeightSpeed = 0.00f;
    this->MaxDepth = 0.00f;
    this->MinDepth = 0.00f;
    this->DepthSpeed = 0.00f;
    this->LateralMovementSpeed = 0.00f;
    this->QuicksandSpeedMultiplier = 0.00f;
    this->MaxRotationSpeed = 0.00f;
    this->MinRotationSpeed = 0.00f;
    this->Springiness = 0.00f;
    this->SpringDampening = 0.00f;
    this->LinearDampening = 0.00f;
    this->LinearStiffness = 0.00f;
    this->AngularSlerpStiffness = 0.00f;
    this->AngularSlerpDamping = 0.00f;
    this->InterpolationSpeed = 0.00f;
    this->PhysMaterialOverride = NULL;
}

