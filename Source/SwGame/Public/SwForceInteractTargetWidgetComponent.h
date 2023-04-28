#pragma once
#include "CoreMinimal.h"
#include "RsUiScreenSpaceWidgetComponent.h"
#include "ESwForceInteractWidgetType.h"
#include "SwForceInteractTargetWidgetComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SWGAME_API USwForceInteractTargetWidgetComponent : public URsUiScreenSpaceWidgetComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwForceInteractWidgetType WidgetType;
    
public:
    USwForceInteractTargetWidgetComponent();
};

