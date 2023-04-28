#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "RsMovieSceneSubtitleTemplate.generated.h"

class URsMovieSceneSubtitleEventSection;

USTRUCT(BlueprintType)
struct RSGAMETECHRT_API FRsMovieSceneSubtitleTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsMovieSceneSubtitleEventSection* Section;
    
    FRsMovieSceneSubtitleTemplate();
};

