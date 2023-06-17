// Copyright Epic Games, Inc. All Rights Reserved.

#include "Importers/DataAssetImporter.h"
#include "Engine/DataAsset.h"

bool UDataAssetImporter::ImportData() {
	try {
		TSharedPtr<FJsonObject> Properties = JsonObject->GetObjectField("Properties");
		GetObjectSerializer()->SetPackageForDeserialization(Package);

		UDataAsset* DataAsset = NewObject<UDataAsset>(Package, DataAssetClass, FName(FileName), RF_Public | RF_Standalone);
		GetObjectSerializer()->DeserializeObjectProperties(Properties, DataAsset);
		
		if (!HandleAssetCreation(DataAsset)) return false;
	} catch (const char* Exception) {
		UE_LOG(LogJson, Error, TEXT("%s"), *FString(Exception));
		return false;
	}

	return true;
}
