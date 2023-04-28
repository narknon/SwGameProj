#include "RsAINavLinkLedgeDetection.h"

bool URsAINavLinkLedgeDetection::LedgeDetectForNavLink(UObject* WorldContext, ARsAINavLink* NavLink, FVector& OutLedgeLocation) {
    return false;
}

bool URsAINavLinkLedgeDetection::LedgeDetectForEndpoints(UObject* WorldContext, FVector Start, FVector End, FVector& OutLedgeLocation) {
    return false;
}

URsAINavLinkLedgeDetection::URsAINavLinkLedgeDetection() {
    // Null default object.
}

