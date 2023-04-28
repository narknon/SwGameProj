#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Rs/RsMapSectionTag.h"
#include "RsMapSectionTagStatics.generated.h"

class UObject;

UCLASS(Blueprintable)
class URsMapSectionTagStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsMapSectionTagStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToString(const FRsMapSectionTag& MapSectionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName ToLocationStampEnumName(const UObject* WorldContextObject, const FRsMapSectionTag& MapSectionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName MakeLocationStampEnumName(const UObject* WorldContextObject, const FName& WorldName, const FName& RegionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FRsMapSectionTag& MapSectionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNotEqual(const FRsMapSectionTag& A, const FRsMapSectionTag& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEqual(const FRsMapSectionTag& A, const FRsMapSectionTag& B);
    
};

