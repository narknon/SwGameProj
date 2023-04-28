#pragma once
#include "CoreMinimal.h"
#include "HavokClothMeshSection.generated.h"

USTRUCT(BlueprintType)
struct FHavokClothMeshSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BufferName;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SectionIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BufferDefinitionSubType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsVisible: 1;
    
    HAVOKCLOTH_API FHavokClothMeshSection();
};

