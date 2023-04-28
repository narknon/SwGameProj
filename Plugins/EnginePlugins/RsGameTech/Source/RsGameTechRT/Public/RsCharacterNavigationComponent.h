#pragma once
#include "CoreMinimal.h"
#include "RsHeroComponent.h"
#include "RsCharacterNavigationComponent.generated.h"

class URsCharacterNavigationManagementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsCharacterNavigationComponent : public URsHeroComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsCharacterNavigationManagementComponent* m_navManagementComponent;
    
public:
    URsCharacterNavigationComponent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URsCharacterNavigationManagementComponent* GetNavigationManagementComponentPointer() const;
    
};

