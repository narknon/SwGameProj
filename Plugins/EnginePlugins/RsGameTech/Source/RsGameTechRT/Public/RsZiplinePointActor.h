#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsZiplinePointActor.generated.h"

class URsZiplinePointComponent;

UCLASS(Blueprintable)
class ARsZiplinePointActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsZiplinePointComponent* ZiplinePointComponent;
    
public:
    ARsZiplinePointActor();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsZiplinePointComponent* GetZiplinePointComponent();
    
};

