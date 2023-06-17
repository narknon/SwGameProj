// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Importer.h"
#include "NiagaraParameterCollectionImporter.h"
#include "NiagaraParameterCollection.h"

class UNiagaraParameterCollectionDerived : public UNiagaraParameterCollection {
public:
    void SetSourceMaterialCollection(UMaterialParameterCollection* MaterialParameterCollection);
    void SetCompileId(FGuid Guid);
    void SetNamespace(FName InNamespace);
    void AddAParameter(FNiagaraVariable Parameter);
};

class UNiagaraParameterCollectionImporter : public IImporter {
public:
    UNiagaraParameterCollectionImporter(const FString& FileName, const FString& FilePath, const TSharedPtr<FJsonObject>& JsonObject, UPackage* Package, UPackage* OutermostPkg) :
        IImporter(FileName, FilePath, JsonObject, Package, OutermostPkg) {
    }

    virtual bool ImportData() override;
};