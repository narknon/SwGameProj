#pragma once
#include "CoreMinimal.h"
#include "Rs/RsMapSectionTag.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapStaticMeshActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class ARsWorldMapStaticMeshActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMapSectionActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag MapSectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAutoSetMapSectionTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    ARsWorldMapStaticMeshActor();
};

