#pragma once
#include "CoreMinimal.h"
#include "RsWorldPlayerSettings.generated.h"

class UMaterial;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FRsWorldPlayerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* Material;
    
    RSGAMETECHRT_API FRsWorldPlayerSettings();
};

