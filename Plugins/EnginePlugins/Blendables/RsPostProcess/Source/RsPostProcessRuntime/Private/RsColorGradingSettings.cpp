#include "RsColorGradingSettings.h"

FRsColorGradingSettings::FRsColorGradingSettings() {
    this->bOverride_WhiteTemp = false;
    this->bOverride_WhiteTint = false;
    this->bOverride_ColorSaturation = false;
    this->bOverride_ColorContrast = false;
    this->bOverride_ColorLift = false;
    this->bOverride_ColorGamma = false;
    this->bOverride_ColorGain = false;
    this->bOverride_ColorOffset = false;
    this->bOverride_ColorSaturationShadows = false;
    this->bOverride_ColorContrastShadows = false;
    this->bOverride_ColorLiftShadows = false;
    this->bOverride_ColorGammaShadows = false;
    this->bOverride_ColorGainShadows = false;
    this->bOverride_ColorOffsetShadows = false;
    this->bOverride_ColorSaturationMidtones = false;
    this->bOverride_ColorContrastMidtones = false;
    this->bOverride_ColorLiftMidtones = false;
    this->bOverride_ColorGammaMidtones = false;
    this->bOverride_ColorGainMidtones = false;
    this->bOverride_ColorOffsetMidtones = false;
    this->bOverride_ColorSaturationHighlights = false;
    this->bOverride_ColorContrastHighlights = false;
    this->bOverride_ColorLiftHighlights = false;
    this->bOverride_ColorGammaHighlights = false;
    this->bOverride_ColorGainHighlights = false;
    this->bOverride_ColorOffsetHighlights = false;
    this->bOverride_ColorCorrectionShadowsMax = false;
    this->bOverride_ColorCorrectionHighlightsMin = false;
    this->bOverride_BlueCorrection = false;
    this->bOverride_ExpandGamut = false;
    this->bOverride_SceneColorTint = false;
    this->bOverride_ColorGradingIntensity = false;
    this->bOverride_ColorGradingLUT = false;
    this->bOverride_ColorGradingFilmNegativeLUT = false;
    this->bOverride_ColorGradingFilmStockLUT = false;
    this->WhiteTemp = 0.00f;
    this->WhiteTint = 0.00f;
    this->ColorCorrectionHighlightsMin = 0.00f;
    this->ColorCorrectionShadowsMax = 0.00f;
    this->ExpandGamut = 0.00f;
    this->ColorGradingFilmNegativeLUT = NULL;
    this->ColorGradingFilmStockLUT = NULL;
}

