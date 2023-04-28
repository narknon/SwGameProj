#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SwCustomizationSettings.generated.h"

UCLASS(Blueprintable)
class USwCustomizationSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FString> EditorSlotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FString> NativeSlotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<int32> EditorToNativeSlotMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<int32> FreeIndicies;
    
public:
    USwCustomizationSettings();
};

