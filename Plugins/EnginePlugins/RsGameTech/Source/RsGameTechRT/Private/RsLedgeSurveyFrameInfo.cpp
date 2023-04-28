#include "RsLedgeSurveyFrameInfo.h"

FRsLedgeSurveyFrameInfo::FRsLedgeSurveyFrameInfo() {
    this->m_width = 0.00f;
    this->m_height = 0.00f;
    this->m_overLedgeDepth = 0.00f;
    this->m_frontOfLedgeHeight = 0.00f;
    this->m_longitudinalAngleFromHorizontalDegrees = 0.00f;
    this->m_lateralAngleFromHorizontalDegrees = 0.00f;
    this->m_hasPullupClearance = false;
    this->m_hasOverLedgeClearance = false;
    this->m_hasGround = false;
    this->m_groundHeight = 0.00f;
    this->m_innerLedgeDepth = 0.00f;
    this->m_hasHangingClearance = false;
    this->m_inDisableGrabVolume = false;
    this->m_forceLedgeHang = false;
}

