#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "Fonts/SlateFontInfo.h"
#include "BoolSortDelegateDelegate.h"
#include "SwUIBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class USwUIBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwUIBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SortObjectArrayByPredicate(UPARAM(Ref) TArray<UObject*>& Objects, FBoolSortDelegate Predicate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldShowXboxFirstRunScreens();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldShowConsoleFirstRunScreens();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D MeasureString(const FText& Text, const FSlateFontInfo& InFontInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetProgressBarScrollPercent(float Fraction, float ScrollFraction, float DeltaTime, float RateFactor, float MinimumRate);
    
    UFUNCTION(BlueprintCallable)
    static FName GetInputKeyName(FKey InputKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FindSupportedLanguage(const FString& LanguageToFind, const TArray<FString>& SupportedLanguages);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FindDefaultSupportedLanguage(const TArray<FString>& SupportedLanguages);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareText(const FText& First, const FText& Second);
    
};

