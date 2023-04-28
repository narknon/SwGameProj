#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "HavokClothBufferSections.h"
#include "HavokClothItemInfo.h"
#include "HavokClothAsset.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class UHavokClothAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBonesUpdatedBySimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSectionsUpdatedBySimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FHavokClothItemInfo> ClothItemsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHavokClothBufferSections> BufferSectionsMap;
    
    UHavokClothAsset();
};

