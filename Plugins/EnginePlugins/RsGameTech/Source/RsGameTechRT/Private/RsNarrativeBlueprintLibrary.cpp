#include "RsNarrativeBlueprintLibrary.h"

FNarrativeEventResult URsNarrativeBlueprintLibrary::NarrativeEvent(UObject* WorldContextObject, FNarrativeEvent Details) {
    return FNarrativeEventResult{};
}

URsNarrativeSystem* URsNarrativeBlueprintLibrary::GetRsNarrativeSystem(UObject* WorldContextObject) {
    return NULL;
}

URsCIGSystem* URsNarrativeBlueprintLibrary::GetRsCIGSystem(UObject* WorldContextObject) {
    return NULL;
}

URsNarrativeBlueprintLibrary::URsNarrativeBlueprintLibrary() {
    // Null default object.
}

