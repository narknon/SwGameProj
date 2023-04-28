#include "RsAnimNode_PoseMatchAssetPlayer.h"

FRsAnimNode_PoseMatchAssetPlayer::FRsAnimNode_PoseMatchAssetPlayer() {
    this->bUseMotionMatchConfig = false;
    this->MotionMatchConfig = NULL;
    this->X = 0.00f;
    this->Y = 0.00f;
    this->Z = 0.00f;
    this->bLockBlendInputX = false;
    this->bLockBlendInputY = false;
    this->Playrate = 0.00f;
    this->bWarpAnimationByRootDistance = false;
    this->DesiredRootDistance = 0.00f;
    this->bShouldWarpRootMotion = false;
    this->bLoopAnimation = false;
    this->ActiveAsset = NULL;
}

