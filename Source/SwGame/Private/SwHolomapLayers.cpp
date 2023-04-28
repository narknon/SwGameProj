#include "SwHolomapLayers.h"

FSwHolomapLayers::FSwHolomapLayers() {
    this->ActiveMapSections = ESwWorldMapLayer::Layer0;
    this->NonActiveMapSectionsTop = ESwWorldMapLayer::Layer0;
    this->NonActiveMapSectionsBottom = ESwWorldMapLayer::Layer0;
    this->Terrain = ESwWorldMapLayer::Layer0;
    this->Doors = ESwWorldMapLayer::Layer0;
    this->Gateways = ESwWorldMapLayer::Layer0;
    this->PlayerArrow = ESwWorldMapLayer::Layer0;
    this->RumorDisc = ESwWorldMapLayer::Layer0;
    this->Planets = ESwWorldMapLayer::Layer0;
    this->Sectors = ESwWorldMapLayer::Layer0;
    this->BreadCrumbs = ESwWorldMapLayer::Layer0;
    this->Beacons = ESwWorldMapLayer::Layer0;
    this->SavePoints = ESwWorldMapLayer::Layer0;
    this->Connectors = ESwWorldMapLayer::Layer0;
    this->RouteLines = ESwWorldMapLayer::Layer0;
}

