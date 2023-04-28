#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavLinkDefinition.h"
#include "Templates/SubclassOf.h"
#include "RsAINavLinkDescriptor.generated.h"

class UNavArea;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsAINavLinkDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Anchors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ENavLinkDirection::Type> Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapToEdgeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnapToGroundHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    uint32 UserId;
    
    FRsAINavLinkDescriptor();
};

