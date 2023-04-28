#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "RsDevNetViewport.generated.h"

UCLASS(Blueprintable)
class URsDevNetViewport : public UGameViewportClient {
    GENERATED_BODY()
public:
    URsDevNetViewport();
};

