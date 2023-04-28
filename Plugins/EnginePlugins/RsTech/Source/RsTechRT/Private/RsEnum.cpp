#include "RsEnum.h"

URsEnum* URsEnum::MakeRsEnum(const FName enumParmName) {
    return NULL;
}

bool URsEnum::MakeBitfield(FRsBitfield& Bitfield, const TArray<FName>& namedBits) const {
    return false;
}

void URsEnum::DumpEnum(FString& ToString) const {
}

void URsEnum::DumpBitfield(FString& ToString, const FRsBitfield& Bitfield) const {
}

URsEnum::URsEnum() {
    // Null default object.
}

