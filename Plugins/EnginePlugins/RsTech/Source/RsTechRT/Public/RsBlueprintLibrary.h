#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ERsNavPermissionDetailFlags -FallbackName=ERsNavPermissionDetailFlags
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=RsBitfield_NavPermissionDetailFlags -FallbackName=RsBitfield_NavPermissionDetailFlags
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=RsBitfield_NavPermissionFlags -FallbackName=RsBitfield_NavPermissionFlags
#include "ERsBase.h"
#include "ERsPSOCachePrecompileMode.h"
#include "RsGeoLocator.h"
#include "RsRange.h"
#include "RsShowFlagsWrapper.h"
#include "RsSurveyPOI.h"
#include "RsSurveyPOIArray.h"
#include "RsTopology.h"
#include "RsBlueprintLibrary.generated.h"

class APlayerController;
class ArsActor;
class UActorComponent;
class UObject;
class UPhysicalMaterial;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class URsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URsBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float WrapShortestInterpolateTo(float Current, float Target, float TimeStep, float InterpolationSpeed, float wrapMin, float wrapMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float WrapAdd(float A, float B, float wrapMin, float wrapMax);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VectorSlerp(const FVector from, const FVector to, float T);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector VectorRotateYaw(const FVector from, float Yaw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Sign(float F);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldUseNavigationPermissions();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetShowFlagForWorldContext(UObject* WorldContextObject, const FString& Name, bool bNewFlagValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void SetRelativeTransform(FRsGeoLocator& newLocator, const FRsGeoLocator& Locator, const FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    static void SetPSOCachePrecompileMode(ERsPSOCachePrecompileMode InMode);
    
    UFUNCTION(BlueprintCallable)
    static void SetNavigationPermissions(UPrimitiveComponent* PrimitiveComponent, const FRsBitfield_NavPermissionFlags& NavPermissions);
    
    UFUNCTION(BlueprintCallable)
    static void SetNavigationPermissionDetailsFlag(UPrimitiveComponent* PrimitiveComponent, TEnumAsByte<ERsNavPermissionDetailFlags::Type> flag, bool bSet);
    
    UFUNCTION(BlueprintCallable)
    static void SetNavigationPermissionDetails(UPrimitiveComponent* PrimitiveComponent, const FRsBitfield_NavPermissionDetailFlags& NavPermissionDetails);
    
    UFUNCTION(BlueprintCallable)
    static void SetCanComponentEverAffectNavigation(UActorComponent* Component, bool bCanEverAffectNavigation);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveTextFileToDisk(const FString& SaveDirectory, const FString& FileNameWithExtension, const FString& FileTextContents, bool AllowOverwriting);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetEditorIntensityForAllLights(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void RangeMap(int32& baseIndex, int32& overlapIndex, float& normalizedSubRange, const float V, const TArray<FRsRange>& Range, const int32 indexShift);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float RandomGaussian(float mean, float stdDeviation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator QuatToRotator(const FQuat Q);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ProjectOnLocatorPlaneNormalized(const FRsGeoLocator& Locator, const TEnumAsByte<EAxis::Type> locatorPlaneNormal, const FVector& V);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector ProjectIntoLocatorPlaneNormalized(const FRsGeoLocator& Locator, const TEnumAsByte<EAxis::Type> locatorPlaneNormal, const FVector& V);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsGeoLocator MakeWorldGeoLocator(const FTransform WorldLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsGeoLocator MakeSkeletalRelativeGeoLocator(USkeletalMeshComponent* skeletalComponent, const FTransform RelativeLocation, const FName& BoneName, const ERsBase relativeLocationSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsGeoLocator MakeRelativeGeoLocator(USceneComponent* SceneComponent, const FTransform RelativeLocation, const ERsBase relativeLocationSpace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsShowFlagEnabledForWorldContext(UObject* WorldContextObject, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShowFlagEnabled(const FRsShowFlagsWrapper& ShowFlags, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPSOCachePrecompiled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsActorOnGround(UObject* WorldContextObject, const ArsActor* Target);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void InvalidateDirectionalShadowVolumes(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator InegrateAngularVelocity(const FRotator& InRotation, const FVector& inAngularVelocity, float DeltaTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IncreaseShadowCacheOverBudgetRetention(UObject* WorldContextObject, float TempRetentionTime, float InDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasSurfaceTweak(const FRsTopology& Topology, const FName AttributeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasNavigationPermissions(const FRsTopology& Topology, const FRsBitfield_NavPermissionFlags& requiredNavPermissions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasHitSurfaceTweak(const FHitResult& Hit, const FName AttributeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasAnyNavigationPermissions(const FRsTopology& Topology, const FRsBitfield_NavPermissionFlags& requiredNavPermissions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetUnitAxis(const FTransform& T, const TEnumAsByte<EAxis::Type> Axis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTopologyCoveragePercentile(const FRsTopology& Topology);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetElement(FRsSurveyPOI& POI, const FRsSurveyPOIArray& poiArray, const int32 I);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentMapName();
    
    UFUNCTION(BlueprintCallable)
    static float GetCurrentExposure(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void ClearNavigationPermissionDetails(UPrimitiveComponent* PrimitiveComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckComponentAndMaterialHasNavigationPermissions(const UPrimitiveComponent* Component, const UPhysicalMaterial* PhysicalMaterial, const FRsBitfield_NavPermissionFlags& requiredNavPermissions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateLeaningAngle(const FVector& Velocity, const FVector& AngularVelocity, const FVector& Gravity, const float Radius, const float DeadZone);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void CalculateCollisionImpulse(FVector& outLinVelA, FVector& outAngVelA, FVector& outLinVelB, FVector& outAngVelB, const FVector& inLinVelA, const FVector& inAngVelA, UPrimitiveComponent* A, UPrimitiveComponent* B, const FHitResult& inHitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void AsVectorAndW(FVector& V, float& W, const FVector4 v4);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform AsTransform(const FRsGeoLocator& Locator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsGeoLocator AsSkeletalGeoLocator(USkeletalMeshComponent* SkeletalMesh, const FName BoneName, const FTransform& T, const ERsBase base);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRsGeoLocator AsPrimitiveGeoLocator(UPrimitiveComponent* Primitive, const FName BoneName, const FTransform& T, const ERsBase base);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AllHaveMatchingNavigationPermissions(const FRsTopology& Topology, const FRsBitfield_NavPermissionFlags& requiredNavPermissions);
    
};

