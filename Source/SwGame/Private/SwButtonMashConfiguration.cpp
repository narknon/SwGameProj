#include "SwButtonMashConfiguration.h"

FSwButtonMashConfiguration::FSwButtonMashConfiguration() {
    this->NumPressToSucceed = 0;
    this->PressHoldTimeToSucceed = 0.00f;
    this->AccessibilityHoldTimeToSucceed = 0.00f;
    this->bDeferEvents = false;
    this->DurationTypeEnum = TimeBased;
    this->Duration = 0.00f;
    this->AutoSucceedDuration = 0.00f;
    this->Montage = NULL;
    this->SyncGroupID = 0;
    this->DurationType = NULL;
}

