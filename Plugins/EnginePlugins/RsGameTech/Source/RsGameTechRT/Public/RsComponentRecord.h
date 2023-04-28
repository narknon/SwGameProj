#pragma once
#include "CoreMinimal.h"
#include "RsComponentRecord.generated.h"

USTRUCT(BlueprintType)
struct FRsComponentRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString UniqueIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> ComponentData;
    
    RSGAMETECHRT_API FRsComponentRecord();
};

