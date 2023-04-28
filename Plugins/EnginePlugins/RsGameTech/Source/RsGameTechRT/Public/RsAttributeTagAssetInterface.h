#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RsAttributeTagAssetInterface.generated.h"

UINTERFACE(meta=(CannotImplementInterfaceInBlueprint))
class URsAttributeTagAssetInterface : public UGameplayTagAssetInterface {
    GENERATED_BODY()
};

class IRsAttributeTagAssetInterface : public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void RemoveAttributeTags(const FGameplayTagContainer& Tags) PURE_VIRTUAL(RemoveAttributeTags,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveAttributeTag(FGameplayTag Tag) PURE_VIRTUAL(RemoveAttributeTag,);
    
    UFUNCTION(BlueprintPure)
    virtual bool MatchesAttributeTagsQuery(const FGameplayTagQuery& TagQuery) const PURE_VIRTUAL(MatchesAttributeTagsQuery, return false;);
    
    UFUNCTION(BlueprintPure)
    virtual bool HasMatchingAttributeTag(FGameplayTag TagToCheck) const PURE_VIRTUAL(HasMatchingAttributeTag, return false;);
    
    UFUNCTION(BlueprintPure)
    virtual bool HasAnyMatchingAttributeTags(const FGameplayTagContainer& TagContainer) const PURE_VIRTUAL(HasAnyMatchingAttributeTags, return false;);
    
    UFUNCTION(BlueprintPure)
    virtual bool HasAllMatchingAttributeTags(const FGameplayTagContainer& TagContainer) const PURE_VIRTUAL(HasAllMatchingAttributeTags, return false;);
    
    UFUNCTION(BlueprintPure)
    virtual FGameplayTagContainer GetTargetAttributeTags() const PURE_VIRTUAL(GetTargetAttributeTags, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintPure)
    virtual FGameplayTagContainer GetAttributeTags() const PURE_VIRTUAL(GetAttributeTags, return FGameplayTagContainer{};);
    
    UFUNCTION(BlueprintPure)
    virtual int32 GetAttributeTagCount(FGameplayTag TagToCheck) const PURE_VIRTUAL(GetAttributeTagCount, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddAttributeTags(const FGameplayTagContainer& Tags) PURE_VIRTUAL(AddAttributeTags,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddAttributeTag(FGameplayTag Tag) PURE_VIRTUAL(AddAttributeTag,);
    
};

