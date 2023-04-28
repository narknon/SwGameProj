#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERsAIClass.h"
#include "RsAICharacterAttributes.generated.h"

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAICharacterAttributes : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIClass::Type> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FightPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FleeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MusicThreat;
    
    FRsAICharacterAttributes();
};

