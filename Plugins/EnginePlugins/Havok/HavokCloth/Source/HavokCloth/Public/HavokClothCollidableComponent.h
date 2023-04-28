#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHavokClothCollidableShape.h"
#include "EHavokClothConvexShapeCreation.h"
#include "HavokClothCollidableBaseComponent.h"
#include "HavokClothCollidableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UHavokClothCollidableComponent : public UHavokClothCollidableBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHavokClothCollidableShape ShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlanePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlaneNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SphereCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CapsuleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CapsuleEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleStartRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CapsuleEndRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BoxHalfExtents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CylinderStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CylinderEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CylinderRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCylinderSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHavokClothConvexShapeCreation ConvexShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHavokClothConvexShapeCreation PhysicsConvexShapeType;
    
    UHavokClothCollidableComponent();
    UFUNCTION(BlueprintCallable)
    void SetupTaperedCapsule(const FVector& Start, const FVector& End, float StartRadius, float EndRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetupSphere(const FVector& Center, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void SetupPlane(const FVector& Point, const FVector& Normal);
    
    UFUNCTION(BlueprintCallable)
    void SetupPhysicsConvex(EHavokClothConvexShapeCreation InDefaultPhysicsConvexType);
    
    UFUNCTION(BlueprintCallable)
    void SetupCylinder(const FVector& Start, const FVector& End, float Radius, int32 NumSides);
    
    UFUNCTION(BlueprintCallable)
    void SetupConvex(EHavokClothConvexShapeCreation InDefaultConvexType);
    
    UFUNCTION(BlueprintCallable)
    void SetupCapsule(const FVector& Start, const FVector& End, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void SetupBox(const FVector& Center, const FVector& HalfExtents);
    
};

