#include "SwAssetManagerLibrary.h"

bool USwAssetManagerLibrary::FindMissingChunkList(const TArray<FSoftObjectPath>& AssetList, TArray<int32>& OutMissingChunkList, TArray<int32>& OutErrorChunkList) {
    return false;
}

bool USwAssetManagerLibrary::AreChunkIDsLoaded(const TArray<int32>& ChunkIDs, TArray<int32>& OutMissingChunks, TArray<int32>& OutErrorChunks) {
    return false;
}

void USwAssetManagerLibrary::AreChunkIDsInstalling(const TArray<int32>& ChunkIDs, TArray<int32>& OutInstalledChunks, TArray<int32>& OutInProgressChunks, TArray<int32>& OutUnknownChunks) {
}

USwAssetManagerLibrary::USwAssetManagerLibrary() {
}

