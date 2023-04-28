#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RsNavigationSystemDebugWindow.generated.h"

UCLASS(Blueprintable)
class URsNavigationSystemDebugWindow : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URsNavigationSystemDebugWindow();
};

