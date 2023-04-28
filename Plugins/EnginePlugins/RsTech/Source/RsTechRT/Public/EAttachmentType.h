#pragma once
#include "CoreMinimal.h"
#include "EAttachmentType.generated.h"

UENUM(BlueprintType)
namespace EAttachmentType {
    enum Type {
        EAttachType_AnimAttach,
        EAttachType_MasterPose,
        EAttachType_SocketAttach,
        EAttachType_External,
        EAttachType_MAX UMETA(Hidden),
    };
}

