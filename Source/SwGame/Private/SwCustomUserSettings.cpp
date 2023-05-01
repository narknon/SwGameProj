#include "SwCustomUserSettings.h"

USwCustomUserSettings::USwCustomUserSettings() {
    this->CustomSettingsInt.AddDefaulted(43);
    this->CustomSettingsBool.AddDefaulted(58);
    this->CustomSettingsFloat.AddDefaulted(2);
    this->CustomSettingsString.AddDefaulted(1);
}

