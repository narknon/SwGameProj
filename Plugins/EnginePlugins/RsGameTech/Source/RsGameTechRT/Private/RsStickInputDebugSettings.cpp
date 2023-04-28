#include "RsStickInputDebugSettings.h"

FRsStickInputDebugSettings::FRsStickInputDebugSettings() {
    this->bShouldUseNormalizedOffsetScreenPositionForDebug = false;
    this->WidgetScale = 0.00f;
    this->bShouldShowInnerOuterDeadZone = false;
    this->bShouldShowDirectionClamping = false;
    this->bShouldShowResponseRemapping = false;
    this->bShouldShowDynamicScaling = false;
    this->ShouldShowSpeed = false;
}

