#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RsCameraBehavior.h"
#include "R4CameraBehavior_OffsetByFocusNormal.generated.h"

UCLASS(Blueprintable)
class UR4CameraBehavior_OffsetByFocusNormal : public URsCameraBehavior {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
public:
    UR4CameraBehavior_OffsetByFocusNormal();
};

