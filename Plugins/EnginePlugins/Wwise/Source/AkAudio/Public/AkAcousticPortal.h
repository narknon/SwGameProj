#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AkAcousticPortalState.h"
#include "AkManagedVolume.h"
#include "AkAcousticPortal.generated.h"

class AActor;
class UAkPortalComponent;

UCLASS(Blueprintable)
class AAkAcousticPortal : public AAkManagedVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkPortalComponent* Portal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TLazyObjectPtr<AActor> AssociatedDoor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkAcousticPortalState InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRequiresStateMigration;
    
public:
    AAkAcousticPortal();
    UFUNCTION(BlueprintCallable)
    void SnapToDoor(const FVector& Dimensions, const FRotator& AdditionalRotation, const FVector& Offset);
    
    UFUNCTION(BlueprintCallable)
    void OpenPortal();
    
    UFUNCTION(BlueprintCallable)
    void OnAssociatedDoorEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnAssociatedDoorDestroyed(AActor* Door);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AkAcousticPortalState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable)
    void ClosePortal();
    
};

