#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsAISpawnerRef.h"
#include "RsAISpawnerContainer.generated.h"

UCLASS(Blueprintable)
class ARsAISpawnerContainer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAISpawnerRef> SpawnerRefs;
    
public:
    ARsAISpawnerContainer();
};

