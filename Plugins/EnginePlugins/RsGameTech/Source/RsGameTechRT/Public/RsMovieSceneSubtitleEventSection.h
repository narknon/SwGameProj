#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "RsMovieSceneSubtitleEventSection.generated.h"

class URAPSystem;

UCLASS(Blueprintable)
class URsMovieSceneSubtitleEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RAPUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TextOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URAPSystem> RAPSystem;
    
public:
    URsMovieSceneSubtitleEventSection();
};

