#pragma once
#include "CoreMinimal.h"
#include "HavokClothSectionInfo.h"
#include "HavokClothSimData.h"
#include "HavokClothItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FHavokClothItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClothName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSimulated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBonesUpdatedBySimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSectionsUpdatedBySimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<FName, FHavokClothSimData> SimCloths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<FName, FHavokClothSectionInfo> ClothSections;
    
    HAVOKCLOTH_API FHavokClothItemInfo();
};

