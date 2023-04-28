#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsBitfield.h"
#include "RsEnum.generated.h"

class URsEnum;

UCLASS(Blueprintable)
class URsEnum : public UObject {
    GENERATED_BODY()
public:
    URsEnum();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URsEnum* MakeRsEnum(const FName enumParmName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool MakeBitfield(FRsBitfield& Bitfield, const TArray<FName>& namedBits) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DumpEnum(FString& ToString) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DumpBitfield(FString& ToString, const FRsBitfield& Bitfield) const;
    
};

