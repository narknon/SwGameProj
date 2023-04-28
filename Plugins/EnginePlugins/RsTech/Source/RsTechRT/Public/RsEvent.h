#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsEventDynamicDelegateDelegate.h"
#include "RsEventDynamicDelegateTopologyChangeDelegate.h"
#include "RsTopology.h"
#include "RsUID.h"
#include "RsEvent.generated.h"

class AActor;
class ArsActor;

UCLASS(Blueprintable)
class URsEvent : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsEvent();
    UFUNCTION(BlueprintCallable)
    static bool UnbindEventByWorldEventID(UPARAM(Ref) FRsUID& worldEventID);
    
    UFUNCTION(BlueprintCallable)
    static bool BindEventToTopologyChange(FRsUID& worldEventID, const ArsActor* Target, const FRsTopology& topologyPatch, FRsEventDynamicDelegateTopologyChange eventDelegate, const bool continuous);
    
    UFUNCTION(BlueprintCallable)
    static bool BindEventToDirectionChange(FRsUID& worldEventID, const AActor* Target, FRsEventDynamicDelegate eventDelegate, const FVector directionReference, const bool continuous);
    
};

