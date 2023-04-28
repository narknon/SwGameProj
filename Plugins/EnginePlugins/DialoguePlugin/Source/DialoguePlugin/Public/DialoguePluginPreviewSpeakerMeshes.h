#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DialoguePluginPreviewSpeakerMeshes.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUEPLUGIN_API FDialoguePluginPreviewSpeakerMeshes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath BodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath FaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath FaceBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath BodyBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilePath DefaultIdle;
    
    FDialoguePluginPreviewSpeakerMeshes();
};

