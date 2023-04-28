#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RsSkeletalMeshVisSubsystem.generated.h"

UCLASS(Blueprintable)
class URsSkeletalMeshVisSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URsSkeletalMeshVisSubsystem();
};

