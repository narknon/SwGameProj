#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RsAnimMotionBoneData.h"
#include "RsPoseMatchWeightAndBoneOptions.h"
#include "RsMotionMatchBlueprintLibrary.generated.h"

class UAnimInstance;
class UAnimSequence;
class UBlendSpaceBase;

UCLASS(Blueprintable)
class URsMotionMatchBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsMotionMatchBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static UAnimSequence* SelectSequenceByRootVelocityAtStart(const UAnimInstance* AnimInstance, TArray<UAnimSequence*> InputSequences, float SearchDuration);
    
    UFUNCTION(BlueprintCallable)
    static UAnimSequence* PoseMatchSequence(const UAnimInstance* AnimInstance, TArray<UAnimSequence*> InputSequences, const FRsPoseMatchWeightAndBoneOptions& Option, float& OutStartTime, int32& OutFrame);
    
    UFUNCTION(BlueprintCallable)
    static UBlendSpaceBase* PoseMatchBlendSpace(const UAnimInstance* AnimInstance, TArray<UBlendSpaceBase*> InputBlendSpaces, const FVector& BlendInput, const FRsPoseMatchWeightAndBoneOptions& Option, float& OutStartPosition, UAnimSequence*& OutSequence, int32& OutFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRootVelocityAtStart(const UAnimSequence* InSequence, float SearchDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetRootVelocity(const UAnimSequence* InSequence, int32 Frame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRootDistance(const UAnimSequence* InSequence, int32 Frame);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRemainingRootDistance(const UAnimSequence* InSequence, int32 Frame);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMotionMetaDataAtTime(const UAnimSequence* InSequence, float Time, TArray<FName>& OutBoneNames, TArray<FRsAnimMotionBoneData>& OutMotionData);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMotionMetaDataAtFrame(const UAnimSequence* InSequence, int32 Frame, TArray<FName>& OutBoneNames, TArray<FRsAnimMotionBoneData>& OutMotionData);
    
};

