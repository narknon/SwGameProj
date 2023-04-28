#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "RsWorldMapStaticMeshComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsWorldMapStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsFogOfWarSection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsTranslucent: 1;
    
public:
    URsWorldMapStaticMeshComponent();
    UFUNCTION(BlueprintCallable)
    void SetIsWorldMapFogOfWarSection(bool bValue);
    
};

