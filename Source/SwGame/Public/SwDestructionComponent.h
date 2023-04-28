#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SwDestructionComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USwDestructionComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TargetSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* DebugPerformanceSkeletalMeshComponent;
    
public:
    USwDestructionComponent();
    UFUNCTION(BlueprintCallable)
    void PlayPartOfAnimation(USkeletalMeshComponent* SkeletalMeshComponentToPlayAnimation, const float TimeToPlay);
    
    UFUNCTION(BlueprintCallable)
    void AdvanceAnimationFrames(USkeletalMeshComponent* SkeletalMeshComponentToPlayAnimation, const int32 NumberOfFramesToAdvance);
    
};

