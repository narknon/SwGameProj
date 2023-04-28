#include "SwWorldMapRumorStateData.h"

FSwWorldMapRumorStateData::FSwWorldMapRumorStateData() {
    this->State = ERsRumorState::None;
    this->Type = ERsRumorType::Rumor;
    this->StateStartTime = 0.00f;
    this->StateEndTime = 0.00f;
    this->bIsTracked = false;
    this->bIsLooping = false;
    this->bHasExploredMapSections = false;
    this->StateCurve = NULL;
    this->EnterCurve = NULL;
    this->IdleCurve = NULL;
    this->ExitCurve = NULL;
    this->HolomapCollection = NULL;
    this->LastRadius = 0.00f;
    this->Radius = 0.00f;
    this->HalfHeight = 0.00f;
    this->EnterDuration = 0.00f;
    this->IdleDuration = 0.00f;
    this->ExitDuration = 0.00f;
}

