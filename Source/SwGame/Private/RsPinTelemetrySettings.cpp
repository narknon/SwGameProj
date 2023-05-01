#include "RsPinTelemetrySettings.h"

URsPinTelemetrySettings::URsPinTelemetrySettings() {
    this->PinTestServerAddress = TEXT("https://pin-river-test.data.ea.com");
    this->PinShippingServerAddress = TEXT("https://pr-5c2f1a37a251ff2a6a8c6eab.data.ea.com");
    this->PinServerPort = 443;
    this->HeartbeatInterval = 10;
}

