#include "RsAnimNode_MotionMatchPlayer.h"

FRsAnimNode_MotionMatchPlayer::FRsAnimNode_MotionMatchPlayer() {
    this->MotionMatchConfig = NULL;
    this->MotionMatchInterval = 0.00f;
    this->BlendTime = 0.00f;
    this->TransitionType = ERsMotionMatchTransitionType::StandardBlend;
    this->bUseArrivalAnimationNearPathCompletion = false;
    this->bUseMoveStopTags = false;
    this->bIgnoreNavMeshCheckForMoveStop = false;
    this->DistanceToGoal = 0.00f;
    this->StableGoalTimeThreshold = 0.00f;
    this->ArrivalAnimationStartDistance = 0.00f;
    this->GoalDistanceMatchMode = ERsDistanceMatchMode::Ignored;
    this->bWarpArrivalAnimations = false;
    this->AimMode = ERsMotionMatchAimMode::FacePathDirection;
    this->DesiredMaxSpeed = 0.00f;
    this->FrameMatchingWindow = 0.00f;
    this->SequenceRetentionRate = 0.00f;
    this->DirectionCorrectionMinDistance = 0.00f;
    this->bIgnoreNavMeshCheck = false;
    this->bNoTurningAway = false;
}

