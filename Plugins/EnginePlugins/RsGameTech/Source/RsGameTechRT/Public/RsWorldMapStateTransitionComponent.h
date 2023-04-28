#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ERsWorldMapStateTransitionAutoUpdateType.h"
#include "ERsWorldMapStateTransitionStateSaveType.h"
#include "ERsWorldMapStateTransitionTransformSaveType.h"
#include "RsWorldMapStateTransitionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsWorldMapStateTransitionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapStateTransitionStateSaveType StateSaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapStateTransitionTransformSaveType TransformSaveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsWorldMapStateTransitionAutoUpdateType AutoUpdateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAlwaysUpdateWorldMapActorTransformAtBuildTime;
    
    URsWorldMapStateTransitionComponent();
};

