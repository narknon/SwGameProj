#pragma once
#include "CoreMinimal.h"
#include "HavokClothSectionInfo.h"
#include "HavokClothBufferSections.generated.h"

USTRUCT(BlueprintType)
struct FHavokClothBufferSections {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClothName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BufferName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FHavokClothSectionInfo> SectionsInfo;
    
    HAVOKCLOTH_API FHavokClothBufferSections();
};

