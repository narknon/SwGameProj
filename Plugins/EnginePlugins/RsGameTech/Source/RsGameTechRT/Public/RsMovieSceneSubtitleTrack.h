#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "RsMovieSceneSubtitleTrack.generated.h"

class UMovieSceneSection;

UCLASS(Blueprintable)
class URsMovieSceneSubtitleTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAMasterTrack: 1;
    
public:
    URsMovieSceneSubtitleTrack();
};

