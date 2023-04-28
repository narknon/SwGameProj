#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SwAssetManagerLibrary.generated.h"

UCLASS(Blueprintable)
class USwAssetManagerLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USwAssetManagerLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindMissingChunkList(const TArray<FSoftObjectPath>& AssetList, TArray<int32>& OutMissingChunkList, TArray<int32>& OutErrorChunkList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreChunkIDsLoaded(const TArray<int32>& ChunkIDs, TArray<int32>& OutMissingChunks, TArray<int32>& OutErrorChunks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void AreChunkIDsInstalling(const TArray<int32>& ChunkIDs, TArray<int32>& OutInstalledChunks, TArray<int32>& OutInProgressChunks, TArray<int32>& OutUnknownChunks);
    
};

