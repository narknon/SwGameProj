#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERsCharacterWallSide.h"
#include "ERsPlayerWallHangState.h"
#include "RsCharacterNavigationComponent.h"
#include "RsCharacterWallSweepResult.h"
#include "RsPlayerWallHangComponent.generated.h"

class URsPlayerWallHangSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class URsPlayerWallHangComponent : public URsCharacterNavigationComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URsPlayerWallHangSettings* WallHangSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanWallHang: 1;
    
    URsPlayerWallHangComponent();
    UFUNCTION(BlueprintCallable)
    bool TryTransitionIntoWallHang(bool bSkipEntryAnim);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryFindWall(FRsCharacterWallSweepResult& OutWallSweepResult) const;
    
    UFUNCTION(BlueprintCallable)
    bool StartWallHang(const FRsCharacterWallSweepResult& InWallSweepResult);
    
    UFUNCTION(BlueprintCallable)
    void StartTrackingSlideTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldFilterWallTopology() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldContinueWallHang(const FRsCharacterWallSweepResult& InWallSweepResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldChimneyJump();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool ShouldApplyWallFriction() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWallHangState(ERsPlayerWallHangState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWallHangStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWallHangJump(bool bChimneyJump);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWallHangEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWallHanging() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInChimney();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForcedWallSlide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsCharacterWallSweepResult GetWallSweepResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetWallSearchDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWallNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsCharacterWallSide GetWallHangSide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetUpAlongWall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsCharacterWallSide GetLastWallHangSide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void GetInputDirectionAndMagnitude(FVector& OutInputDirection, float& OutInputMagnitude) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetForwardAlongWall() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERsPlayerWallHangState GetCurrentWallHangState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetChimneyWidth();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetChimneyCenterLocation();
    
    UFUNCTION(BlueprintCallable)
    void EndWallHang();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanWallJumpFromWallHang() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanWallHang() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanStartWallHang(const FRsCharacterWallSweepResult& InWallSweepResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEverWallHang() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool CanAutoAttachWallHang(const FRsCharacterWallSweepResult& InWallSweepResult) const;
    
};

