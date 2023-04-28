#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwDismembermentData.h"
#include "SwDismembermentManager.generated.h"

class UDataTable;
class USkeletalMeshComponent;
class UWorld;

UCLASS(Blueprintable, NotPlaceable, Transient)
class SWGAME_API ASwDismembermentManager : public AActor {
    GENERATED_BODY()
public:
    ASwDismembermentManager();
    UFUNCTION(BlueprintCallable)
    void DismemberCharacterWithData(UWorld* World, USkeletalMeshComponent* CharacterMesh, const FSwDismembermentData& DismembermentData);
    
    UFUNCTION(BlueprintCallable)
    void DismemberCharacter(UWorld* World, USkeletalMeshComponent* CharacterMesh, UDataTable* DismembermentTable, FName DismembermentTarget);
    
};

