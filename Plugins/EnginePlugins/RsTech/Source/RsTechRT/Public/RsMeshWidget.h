#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "RsMeshWidget.generated.h"

class USlateVectorArtData;

UCLASS(Blueprintable)
class URsMeshWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateVectorArtData* VectorArtData;
    
    URsMeshWidget();
};

