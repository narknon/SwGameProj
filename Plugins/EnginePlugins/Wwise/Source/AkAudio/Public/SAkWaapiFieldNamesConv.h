#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AkWaapiFieldNames.h"
#include "SAkWaapiFieldNamesConv.generated.h"

UCLASS(Blueprintable)
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USAkWaapiFieldNamesConv();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText Conv_FAkWaapiFieldNamesToText(const FAkWaapiFieldNames& INAkWaapiFieldNames);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_FAkWaapiFieldNamesToString(const FAkWaapiFieldNames& INAkWaapiFieldNames);
    
};

