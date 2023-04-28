#include "RsIKBoneDefinition.h"

FRsIKBoneDefinition::FRsIKBoneDefinition() {
    this->SurfacePlaneNormalAxis = EAxis::None;
    this->BoneType = ERsIkBoneType::LeftFoot;
    this->bShouldEverEffectHips = false;
    this->bDisableCollisionTrace = false;
    this->Shape = ERsIKShape::Line;
    this->bUseSurfaceNormalAsTraceDirection = false;
    this->bTraceFromProjectionOnSurface = false;
    this->bTraceFromProjectionOnSurfaceLine = false;
    this->TraceDistAwayFromSurface = 0.00f;
    this->TraceDistTowardsSurface = 0.00f;
    this->TraceMaxSlopeAngle = 0.00f;
}

