#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FloatingInWaterHiResPoolElement.h"
#include "FloatingInWaterLowResPoolElement.h"
#include "SwActorsFloatingInWaterComponent.generated.h"

class AActor;
class USwActorsFloatingInWaterDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwActorsFloatingInWaterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* WaterActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwActorsFloatingInWaterDataAsset* SettingsDataAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFloatingInWaterHiResPoolElement> m_HiResPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFloatingInWaterLowResPoolElement> m_LowResPool;
    
public:
    USwActorsFloatingInWaterComponent();
};

