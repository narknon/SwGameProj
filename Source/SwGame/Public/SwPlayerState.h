#pragma once
#include "CoreMinimal.h"
#include "RsPlayerState.h"
#include "SwPlayerState.generated.h"

UCLASS(Blueprintable)
class SWGAME_API ASwPlayerState : public ARsPlayerState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 NumDeaths;
    
public:
    ASwPlayerState();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumDeaths() const;
    
};

