#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RsBitfield.h"
#include "RsBitStack.generated.h"

class URsBitStack;
class URsEnum;

UCLASS(Blueprintable)
class URsBitStack : public UObject {
    GENERATED_BODY()
public:
    URsBitStack();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName TopParmName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsBitfield TopInvalid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRsBitfield Top() const;
    
    UFUNCTION(BlueprintCallable)
    bool SetNamed(const TArray<FName>& SetBits);
    
    UFUNCTION(BlueprintCallable)
    bool SetInvalidNamed(const TArray<FName>& invalidBits);
    
    UFUNCTION(BlueprintCallable)
    bool SetInvalidAtNamed(const FName Name, const TArray<FName>& invalidBits);
    
    UFUNCTION(BlueprintCallable)
    bool SetInvalidAt(const FName Name, const FRsBitfield& invalidBits);
    
    UFUNCTION(BlueprintCallable)
    bool SetInvalid(const FRsBitfield& invalidBits);
    
    UFUNCTION(BlueprintCallable)
    bool SetAtNamed(const FName Name, const TArray<FName>& SetBits);
    
    UFUNCTION(BlueprintCallable)
    bool SetAt(const FName Name, const FRsBitfield& SetBits);
    
    UFUNCTION(BlueprintCallable)
    bool Set(const FRsBitfield& SetBits);
    
    UFUNCTION(BlueprintCallable)
    bool PushNamed(const FName Name, const TArray<FName>& NewSet, const TArray<FName>& NewClear, const TArray<FName>& Invalid, const TArray<FName>& NewClearInvalid);
    
    UFUNCTION(BlueprintCallable)
    bool Push(const FName Name, const FRsBitfield NewSet, const FRsBitfield NewClear, const FRsBitfield Invalid, const FRsBitfield NewClearInvalid);
    
    UFUNCTION(BlueprintCallable)
    bool Pop(const FName bitParmName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URsBitStack* MakeRsBitStack(const URsEnum* RsEnum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsParmInStack(const FName bitParmName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnySet(const FRsBitfield& Bitfield) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyNamedSet(const TArray<FName>& Bits) const;
    
    UFUNCTION(BlueprintCallable)
    void EmptyStack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void DumpBitStack(FString& ToString) const;
    
    UFUNCTION(BlueprintCallable)
    bool ClearNamed(const TArray<FName>& clearBits);
    
    UFUNCTION(BlueprintCallable)
    bool ClearInvalidNamed(const TArray<FName>& clearinvalidBits);
    
    UFUNCTION(BlueprintCallable)
    bool ClearInvalidAtNamed(const FName Name, const TArray<FName>& clearinvalidBits);
    
    UFUNCTION(BlueprintCallable)
    bool ClearInvalidAt(const FName Name, const FRsBitfield& clearinvalidBits);
    
    UFUNCTION(BlueprintCallable)
    bool ClearInvalid(const FRsBitfield& clearinvalidBits);
    
    UFUNCTION(BlueprintCallable)
    bool ClearAtNamed(const FName Name, const TArray<FName>& clearBits);
    
    UFUNCTION(BlueprintCallable)
    bool ClearAt(const FName Name, const FRsBitfield& clearBits);
    
    UFUNCTION(BlueprintCallable)
    bool Clear(const FRsBitfield& clearBits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllSet(const FRsBitfield& Bitfield) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreAllNamedSet(const TArray<FName>& Bits) const;
    
};

