#pragma once
#include "CoreMinimal.h"
#include "RsOnCustomizationPieceLoadCompleteDelegateDelegate.generated.h"

class URsCustomizationPiece;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FRsOnCustomizationPieceLoadCompleteDelegate, URsCustomizationPiece*, CustomizationPiece);

