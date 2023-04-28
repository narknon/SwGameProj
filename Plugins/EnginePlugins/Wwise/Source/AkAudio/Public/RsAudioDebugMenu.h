#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsMusicThreatContributor.h"
#include "RsAudioDebugMenu.generated.h"

class UObject;

UCLASS(Blueprintable)
class URsAudioDebugMenu : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsAudioDebugMenu();
    UFUNCTION(BlueprintCallable)
    static void ShowAudioDebugMenu();
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMenuThreatContributors(const TArray<FRsMusicThreatContributor>& InThreatContributors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InitAudioDebugMenu(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void HideAudioDebugMenu();
    
};

