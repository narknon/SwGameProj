#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SwDismembermentData.h"
#include "SwDismembermentStatics.generated.h"

class ASwDismembermentManager;
class UDataTable;
class UObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class SWGAME_API USwDismembermentStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwDismembermentStatics();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASwDismembermentManager* GetDismembermentManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DismemberCharacterWithData(USkeletalMeshComponent* CharacterMesh, const FSwDismembermentData& DismembermentData, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DismemberCharacter(USkeletalMeshComponent* CharacterMesh, UDataTable* DismembermentTable, FName DismembermentTarget, const UObject* WorldContextObject);
    
};

