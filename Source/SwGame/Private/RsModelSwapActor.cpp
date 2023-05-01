#include "RsModelSwapActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ARsModelSwapActor::ARsModelSwapActor() {
    this->ModelSwapMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ModelSwapMeshComponent"));
}

