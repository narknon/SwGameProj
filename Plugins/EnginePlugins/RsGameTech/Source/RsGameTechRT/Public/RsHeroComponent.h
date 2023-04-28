#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RsHeroComponent.generated.h"

class ARsHero;
class URsPlayerAnimInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsHeroComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARsHero* Hero;
    
public:
    URsHeroComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsPlayerAnimInstance* GetPlayerAnimInstance() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DebugGetHeroComponentInfo(FString& ComponentInfoString) const;
    
};

