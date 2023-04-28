#pragma once
#include "CoreMinimal.h"
#include "HavokClothMeshSection.h"
#include "HavokClothItem.generated.h"

USTRUCT(BlueprintType)
struct FHavokClothItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ClothName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollideWithWorldCollidables: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportsDynamicCollisions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSupportsStaticCollisions: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollideWithDynamicBodies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCollideWithStaticBodies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FHavokClothMeshSection> ClothSections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesMeshBoneDeform: 1;
    
    HAVOKCLOTH_API FHavokClothItem();
};

