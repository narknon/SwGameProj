#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ERsAIEncounterMemberState.h"
#include "RsAIEncounterMemberData.generated.h"

class ARsAICharacter;

USTRUCT(BlueprintType)
struct FRsAIEncounterMemberData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARsAICharacter> AICharacter;
    
    UPROPERTY(EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 CharacterSpawnID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString MemberClassPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERsAIEncounterMemberState> MemberState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FTransform DeathTransform;
    
    RSGAMETECHRT_API FRsAIEncounterMemberData();
};

