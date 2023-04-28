#include "RsMapSectionTagStatics.h"

FString URsMapSectionTagStatics::ToString(const FRsMapSectionTag& MapSectionTag) {
    return TEXT("");
}

FName URsMapSectionTagStatics::ToLocationStampEnumName(const UObject* WorldContextObject, const FRsMapSectionTag& MapSectionTag) {
    return NAME_None;
}

FName URsMapSectionTagStatics::MakeLocationStampEnumName(const UObject* WorldContextObject, const FName& WorldName, const FName& RegionName) {
    return NAME_None;
}

bool URsMapSectionTagStatics::IsValid(const FRsMapSectionTag& MapSectionTag) {
    return false;
}

bool URsMapSectionTagStatics::IsNotEqual(const FRsMapSectionTag& A, const FRsMapSectionTag& B) {
    return false;
}

bool URsMapSectionTagStatics::IsEqual(const FRsMapSectionTag& A, const FRsMapSectionTag& B) {
    return false;
}

URsMapSectionTagStatics::URsMapSectionTagStatics() {
    // Null default object.
}

