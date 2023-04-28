#include "SwUIBlueprintLibrary.h"

void USwUIBlueprintLibrary::SortObjectArrayByPredicate(TArray<UObject*>& Objects, FBoolSortDelegate Predicate) {
}

bool USwUIBlueprintLibrary::ShouldShowXboxFirstRunScreens() {
    return false;
}

bool USwUIBlueprintLibrary::ShouldShowConsoleFirstRunScreens() {
    return false;
}

FVector2D USwUIBlueprintLibrary::MeasureString(const FText& Text, const FSlateFontInfo& InFontInfo) {
    return FVector2D{};
}

float USwUIBlueprintLibrary::GetProgressBarScrollPercent(float Fraction, float ScrollFraction, float DeltaTime, float RateFactor, float MinimumRate) {
    return 0.0f;
}

FName USwUIBlueprintLibrary::GetInputKeyName(FKey InputKey) {
    return NAME_None;
}

int32 USwUIBlueprintLibrary::FindSupportedLanguage(const FString& LanguageToFind, const TArray<FString>& SupportedLanguages) {
    return 0;
}

int32 USwUIBlueprintLibrary::FindDefaultSupportedLanguage(const TArray<FString>& SupportedLanguages) {
    return 0;
}

bool USwUIBlueprintLibrary::CompareText(const FText& First, const FText& Second) {
    return false;
}

USwUIBlueprintLibrary::USwUIBlueprintLibrary() {
    // Null default object.
}

