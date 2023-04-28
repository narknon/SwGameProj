#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "BoneContainer.h"
#include "Engine/EngineTypes.h"
#include "RsFootBoneData.h"
#include "RsQuadrupedIKAnimInstance.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class URsQuadrupedIKAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDebugDraw;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> ForelegRoots;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> HindLegRoots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRsFootBoneData> FootBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDownDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceOffsetCS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BodyInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* BodyInterpSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FootInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform RootRelativeTransform;
    
    URsQuadrupedIKAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldRunIKEvaluation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFootPlantedAndIKValid(const FRsFootBoneData& FootBoneData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFootPlanted(FName FootBone) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFootIKParameters(FName BoneName, FVector& EffectorLocationCS, float& ALPHA) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetFootEffectorRelativeRotation(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFootEffectorLocationCS(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetFootBoneNames() const;
    
};

