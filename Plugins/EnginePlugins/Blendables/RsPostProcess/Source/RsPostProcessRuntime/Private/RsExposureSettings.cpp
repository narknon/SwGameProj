#include "RsExposureSettings.h"

FRsExposureSettings::FRsExposureSettings() {
    this->bOverride_AutoExposureMethod = false;
    this->bOverride_AutoExposureLowPercent = false;
    this->bOverride_AutoExposureHighPercent = false;
    this->bOverride_AutoExposureMinBrightness = false;
    this->bOverride_AutoExposureMaxBrightness = false;
    this->bOverride_AutoExposureCalibrationConstant = false;
    this->bOverride_AutoExposureSpeedUp = false;
    this->bOverride_AutoExposureSpeedDown = false;
    this->bOverride_AutoExposureBias = false;
    this->bOverride_AutoExposureBiasCurve = false;
    this->bOverride_AutoExposureMeterMask = false;
    this->bOverride_AutoExposureApplyPhysicalCameraExposure = false;
    this->bOverride_HistogramLogMin = false;
    this->bOverride_HistogramLogMax = false;
    this->AutoExposureMethod = AEM_Histogram;
    this->AutoExposureBias = 0.00f;
    this->AutoExposureApplyPhysicalCameraExposure = false;
    this->AutoExposureBiasCurve = NULL;
    this->AutoExposureMeterMask = NULL;
    this->AutoExposureLowPercent = 0.00f;
    this->AutoExposureHighPercent = 0.00f;
    this->AutoExposureMinBrightness = 0.00f;
    this->AutoExposureMaxBrightness = 0.00f;
    this->AutoExposureSpeedUp = 0.00f;
    this->AutoExposureSpeedDown = 0.00f;
    this->HistogramLogMin = 0.00f;
    this->HistogramLogMax = 0.00f;
}

