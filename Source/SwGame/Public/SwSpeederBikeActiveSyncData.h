#pragma once
#include "CoreMinimal.h"
#include "SwSpeederBikeActiveSyncSecondaryTargetData.h"
#include "SwSpeederBikeSyncID.h"
#include "SwSpeederBikeSyncParameters.h"
#include "SwSpeederBikeActiveSyncData.generated.h"

class UAnimMontage;
class USceneComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct SWGAME_API FSwSpeederBikeActiveSyncData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSwSpeederBikeSyncID m_ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSwSpeederBikeSyncParameters m_Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_HeroSpeederBikeSkelMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* m_HeroSpeederBikeAttachParentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_NewHeroSpeederBikeAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_HeroCharacterSkelMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* m_HeroAttachParentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_NewHeroAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_NewCameraAnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSwSpeederBikeActiveSyncSecondaryTargetData> m_SecondaryTargets;
    
    FSwSpeederBikeActiveSyncData();
};

