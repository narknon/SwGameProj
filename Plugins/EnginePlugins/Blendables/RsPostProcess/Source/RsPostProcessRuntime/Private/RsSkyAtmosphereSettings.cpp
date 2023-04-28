#include "RsSkyAtmosphereSettings.h"

FRsSkyAtmosphereSettings::FRsSkyAtmosphereSettings() {
    this->bOverride_EnableSkyAtmosphere = false;
    this->bOverride_PlanetSurfaceZCoord = false;
    this->bOverride_BottomRadius = false;
    this->bOverride_GroundAlbedo = false;
    this->bOverride_AtmosphereHeight = false;
    this->bOverride_MultiScatteringFactor = false;
    this->bOverride_TraceSampleCountScale = false;
    this->bOverride_RayleighScatteringScale = false;
    this->bOverride_RayleighScattering = false;
    this->bOverride_RayleighExponentialDistribution = false;
    this->bOverride_MieScatteringScale = false;
    this->bOverride_MieScattering = false;
    this->bOverride_MieAbsorptionScale = false;
    this->bOverride_MieAbsorption = false;
    this->bOverride_MieAnisotropy = false;
    this->bOverride_MieExponentialDistribution = false;
    this->bOverride_OtherAbsorptionScale = false;
    this->bOverride_OtherAbsorption = false;
    this->bOverride_OtherTentDistribution = false;
    this->bOverride_SkyLuminanceFactor = false;
    this->bOverride_AerialPerspectiveViewDistanceScale = false;
    this->bOverride_HeightFogContribution = false;
    this->bOverride_TransmittanceMinLightElevationAngle = false;
    this->bOverride_AerialPerspectiveStartDepth = false;
    this->EnableSkyAtmosphere = false;
    this->PlanetSurfaceZCoord = 0.00f;
    this->BottomRadius = 0.00f;
    this->AtmosphereHeight = 0.00f;
    this->MultiScatteringFactor = 0.00f;
    this->TraceSampleCountScale = 0.00f;
    this->RayleighScatteringScale = 0.00f;
    this->RayleighExponentialDistribution = 0.00f;
    this->MieScatteringScale = 0.00f;
    this->MieAbsorptionScale = 0.00f;
    this->MieAnisotropy = 0.00f;
    this->MieExponentialDistribution = 0.00f;
    this->OtherAbsorptionScale = 0.00f;
    this->AerialPerspectiveViewDistanceScale = 0.00f;
    this->HeightFogContribution = 0.00f;
    this->TransmittanceMinLightElevationAngle = 0.00f;
    this->AerialPerspectiveStartDepth = 0.00f;
}

