#include "SwEULALocalization.h"

bool USwEULALocalization::ShouldOverrideEULAForEU() const {
    return false;
}

FText USwEULALocalization::GetEULAText(FName TextIdentifier) {
    return FText::GetEmpty();
}

USwEULALocalization::USwEULALocalization() {
    this->EULALocalizationTextTable = NULL;
}

