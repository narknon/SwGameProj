#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SwAnimNotify_SetDefenseWindow.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class SWGAME_API USwAnimNotify_SetDefenseWindow : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseWindow;
    
public:
    USwAnimNotify_SetDefenseWindow();
};

