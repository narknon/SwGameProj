#include "R4CameraBehavior_Animated.h"

UR4CameraBehavior_Animated::UR4CameraBehavior_Animated() {
    this->bClearRollWhenFinished = true;
    this->AnimatedCameraMode = ERsAnimatedCameraMode::HeroRig;
    this->bIgnoreMontageBlendOut = false;
}

