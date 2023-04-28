#pragma once
#include "CoreMinimal.h"
#include "Rs/RsMapSectionTag.h"
#include "ERsConnectorType.h"
#include "RsDirectionalArrowConnectorData.h"
#include "RsGrapplePointConnectorData.h"
#include "RsWorldMapActor.h"
#include "RsWorldMapConnectorActor.generated.h"

class URsWorldMapInstancedStaticMeshComponent;
class USplineComponent;

UCLASS(Blueprintable)
class ARsWorldMapConnectorActor : public ARsWorldMapActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectorIntervalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConnectorSplit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERsConnectorType ConnectorPreviewType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsDirectionalArrowConnectorData DirectionalArrowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrappleConnectorHideArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldGrapplePointsUseSplineRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsGrapplePointConnectorData> GrapplePointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag StartMapSectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRsMapSectionTag EndMapSectionTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapInstancedStaticMeshComponent* Connectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapInstancedStaticMeshComponent* Arrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URsWorldMapInstancedStaticMeshComponent* GrapplePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
public:
    ARsWorldMapConnectorActor();
};

