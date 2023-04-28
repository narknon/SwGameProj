#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERsCharacterType.h"
#include "RsAINavLinkDescriptor.h"
#include "RsAINavLinkEndpointDescriptor.h"
#include "RsAINavLink.generated.h"

class URsAINavLinkDefinition;

UCLASS(Blueprintable)
class ARsAINavLink : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsAINavLinkDescriptor LinkDescriptor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsAINavLinkDefinition* NavLinkDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TEnumAsByte<ERsCharacterType>> CharacterTypeFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsAINavLinkEndpointDescriptor> EndpointDescriptors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsValidLink: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseCharacterTypeFilter: 1;
    
public:
    ARsAINavLink();
    UFUNCTION(BlueprintCallable)
    void SetLinkEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLinkEnabled() const;
    
};

