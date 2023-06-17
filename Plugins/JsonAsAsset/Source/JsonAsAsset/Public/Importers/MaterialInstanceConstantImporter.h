// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Importer.h"

class UMaterialInstanceConstantImporter : public IImporter {
public:
	UMaterialInstanceConstantImporter(const FString& FileName, const FString& FilePath, const TSharedPtr<FJsonObject>& JsonObject, UPackage* Package, UPackage* OutermostPkg, const TArray<TSharedPtr<FJsonValue>>& AllJsonObjects):
		IImporter(FileName, FilePath, JsonObject, Package, OutermostPkg, AllJsonObjects) {
	}

	virtual bool ImportData() override;
};
