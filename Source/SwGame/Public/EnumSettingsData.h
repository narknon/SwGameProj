#pragma once
#include "CoreMinimal.h"
#include "EnumSettingsData.generated.h"

USTRUCT(BlueprintType)
struct FEnumSettingsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FString> EditorEnumNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FString> NativeEnumNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<int32> EditorToNativeEnumMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<int32> FreeIndicies;
    
    SWGAME_API FEnumSettingsData();
};

