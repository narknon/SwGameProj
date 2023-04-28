#pragma once
#include "CoreMinimal.h"
#include "SwDefenseComponent.h"
#include "SwHeroDefenseComponent.generated.h"

class ARsHero;
class URsPlayerAnimInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwHeroDefenseComponent : public USwDefenseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARsHero* Hero;
    
public:
    USwHeroDefenseComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsPlayerAnimInstance* GetPlayerAnimInstance() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool DebugGetHeroComponentInfo(FString& ComponentInfoString) const;
    
};

