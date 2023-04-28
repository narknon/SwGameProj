#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RsEditorTickViewInfo.h"
#include "RsEditorTickActor.generated.h"

UCLASS(Blueprintable)
class ARsEditorTickActor : public AActor {
    GENERATED_BODY()
public:
    ARsEditorTickActor();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickInEditor(float DeltaSeconds, const TArray<FRsEditorTickViewInfo>& ViewInfos);
    
};

