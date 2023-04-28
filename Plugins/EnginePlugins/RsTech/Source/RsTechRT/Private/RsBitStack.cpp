#include "RsBitStack.h"

FName URsBitStack::TopParmName() const {
    return NAME_None;
}

FRsBitfield URsBitStack::TopInvalid() const {
    return FRsBitfield{};
}

FRsBitfield URsBitStack::Top() const {
    return FRsBitfield{};
}

bool URsBitStack::SetNamed(const TArray<FName>& SetBits) {
    return false;
}

bool URsBitStack::SetInvalidNamed(const TArray<FName>& invalidBits) {
    return false;
}

bool URsBitStack::SetInvalidAtNamed(const FName Name, const TArray<FName>& invalidBits) {
    return false;
}

bool URsBitStack::SetInvalidAt(const FName Name, const FRsBitfield& invalidBits) {
    return false;
}

bool URsBitStack::SetInvalid(const FRsBitfield& invalidBits) {
    return false;
}

bool URsBitStack::SetAtNamed(const FName Name, const TArray<FName>& SetBits) {
    return false;
}

bool URsBitStack::SetAt(const FName Name, const FRsBitfield& SetBits) {
    return false;
}

bool URsBitStack::Set(const FRsBitfield& SetBits) {
    return false;
}

bool URsBitStack::PushNamed(const FName Name, const TArray<FName>& NewSet, const TArray<FName>& NewClear, const TArray<FName>& Invalid, const TArray<FName>& NewClearInvalid) {
    return false;
}

bool URsBitStack::Push(const FName Name, const FRsBitfield NewSet, const FRsBitfield NewClear, const FRsBitfield Invalid, const FRsBitfield NewClearInvalid) {
    return false;
}

bool URsBitStack::Pop(const FName bitParmName) {
    return false;
}

URsBitStack* URsBitStack::MakeRsBitStack(const URsEnum* RsEnum) {
    return NULL;
}

bool URsBitStack::IsParmInStack(const FName bitParmName) const {
    return false;
}

bool URsBitStack::IsAnySet(const FRsBitfield& Bitfield) const {
    return false;
}

bool URsBitStack::IsAnyNamedSet(const TArray<FName>& Bits) const {
    return false;
}

void URsBitStack::EmptyStack() {
}

void URsBitStack::DumpBitStack(FString& ToString) const {
}

bool URsBitStack::ClearNamed(const TArray<FName>& clearBits) {
    return false;
}

bool URsBitStack::ClearInvalidNamed(const TArray<FName>& clearinvalidBits) {
    return false;
}

bool URsBitStack::ClearInvalidAtNamed(const FName Name, const TArray<FName>& clearinvalidBits) {
    return false;
}

bool URsBitStack::ClearInvalidAt(const FName Name, const FRsBitfield& clearinvalidBits) {
    return false;
}

bool URsBitStack::ClearInvalid(const FRsBitfield& clearinvalidBits) {
    return false;
}

bool URsBitStack::ClearAtNamed(const FName Name, const TArray<FName>& clearBits) {
    return false;
}

bool URsBitStack::ClearAt(const FName Name, const FRsBitfield& clearBits) {
    return false;
}

bool URsBitStack::Clear(const FRsBitfield& clearBits) {
    return false;
}

bool URsBitStack::AreAllSet(const FRsBitfield& Bitfield) const {
    return false;
}

bool URsBitStack::AreAllNamedSet(const TArray<FName>& Bits) const {
    return false;
}

URsBitStack::URsBitStack() {
    // Null default object.
}

