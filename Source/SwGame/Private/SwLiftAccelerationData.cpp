#include "SwLiftAccelerationData.h"

FSwLiftAccelerationData::FSwLiftAccelerationData() {
    this->Distance = 0.00f;
    this->DistanceVariation = 0.00f;
    this->Duration = 0.00f;
    this->OverrideAccelCurve = NULL;
    this->CurveScaleLow = 0.00f;
    this->CurveScaleHigh = 0.00f;
    this->CurveIntegrationLow = 0.00f;
    this->CurveIntegrationHigh = 0.00f;
    this->CurveIntegrationWithScaleLow = 0.00f;
    this->CurveIntegrationWithScaleHigh = 0.00f;
}

