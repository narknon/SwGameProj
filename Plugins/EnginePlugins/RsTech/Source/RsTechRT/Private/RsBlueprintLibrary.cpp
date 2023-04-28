#include "RsBlueprintLibrary.h"

float URsBlueprintLibrary::WrapShortestInterpolateTo(float Current, float Target, float TimeStep, float InterpolationSpeed, float wrapMin, float wrapMax) {
    return 0.0f;
}

float URsBlueprintLibrary::WrapAdd(float A, float B, float wrapMin, float wrapMax) {
    return 0.0f;
}

FVector URsBlueprintLibrary::VectorSlerp(const FVector from, const FVector to, float T) {
    return FVector{};
}

FVector URsBlueprintLibrary::VectorRotateYaw(const FVector from, float Yaw) {
    return FVector{};
}

float URsBlueprintLibrary::Sign(float F) {
    return 0.0f;
}

bool URsBlueprintLibrary::ShouldUseNavigationPermissions() {
    return false;
}

void URsBlueprintLibrary::SetShowFlagForWorldContext(UObject* WorldContextObject, const FString& Name, bool bNewFlagValue) {
}

void URsBlueprintLibrary::SetRelativeTransform(FRsGeoLocator& newLocator, const FRsGeoLocator& Locator, const FTransform& RelativeTransform) {
}

void URsBlueprintLibrary::SetPSOCachePrecompileMode(ERsPSOCachePrecompileMode InMode) {
}

void URsBlueprintLibrary::SetNavigationPermissions(UPrimitiveComponent* PrimitiveComponent, const FRsBitfield_NavPermissionFlags& NavPermissions) {
}

void URsBlueprintLibrary::SetNavigationPermissionDetailsFlag(UPrimitiveComponent* PrimitiveComponent, TEnumAsByte<ERsNavPermissionDetailFlags::Type> flag, bool bSet) {
}

void URsBlueprintLibrary::SetNavigationPermissionDetails(UPrimitiveComponent* PrimitiveComponent, const FRsBitfield_NavPermissionDetailFlags& NavPermissionDetails) {
}

void URsBlueprintLibrary::SetCanComponentEverAffectNavigation(UActorComponent* Component, bool bCanEverAffectNavigation) {
}

bool URsBlueprintLibrary::SaveTextFileToDisk(const FString& SaveDirectory, const FString& FileNameWithExtension, const FString& FileTextContents, bool AllowOverwriting) {
    return false;
}

void URsBlueprintLibrary::ResetEditorIntensityForAllLights(UObject* WorldContextObject) {
}

void URsBlueprintLibrary::RangeMap(int32& baseIndex, int32& overlapIndex, float& normalizedSubRange, const float V, const TArray<FRsRange>& Range, const int32 indexShift) {
}

float URsBlueprintLibrary::RandomGaussian(float mean, float stdDeviation) {
    return 0.0f;
}

FRotator URsBlueprintLibrary::QuatToRotator(const FQuat Q) {
    return FRotator{};
}

FVector URsBlueprintLibrary::ProjectOnLocatorPlaneNormalized(const FRsGeoLocator& Locator, const TEnumAsByte<EAxis::Type> locatorPlaneNormal, const FVector& V) {
    return FVector{};
}

FVector URsBlueprintLibrary::ProjectIntoLocatorPlaneNormalized(const FRsGeoLocator& Locator, const TEnumAsByte<EAxis::Type> locatorPlaneNormal, const FVector& V) {
    return FVector{};
}

FRsGeoLocator URsBlueprintLibrary::MakeWorldGeoLocator(const FTransform WorldLocation) {
    return FRsGeoLocator{};
}

FRsGeoLocator URsBlueprintLibrary::MakeSkeletalRelativeGeoLocator(USkeletalMeshComponent* skeletalComponent, const FTransform RelativeLocation, const FName& BoneName, const ERsBase relativeLocationSpace) {
    return FRsGeoLocator{};
}

FRsGeoLocator URsBlueprintLibrary::MakeRelativeGeoLocator(USceneComponent* SceneComponent, const FTransform RelativeLocation, const ERsBase relativeLocationSpace) {
    return FRsGeoLocator{};
}

bool URsBlueprintLibrary::IsShowFlagEnabledForWorldContext(UObject* WorldContextObject, const FString& Name) {
    return false;
}

bool URsBlueprintLibrary::IsShowFlagEnabled(const FRsShowFlagsWrapper& ShowFlags, const FString& Name) {
    return false;
}

bool URsBlueprintLibrary::IsPSOCachePrecompiled() {
    return false;
}

bool URsBlueprintLibrary::IsActorOnGround(UObject* WorldContextObject, const ArsActor* Target) {
    return false;
}

void URsBlueprintLibrary::InvalidateDirectionalShadowVolumes(UObject* WorldContextObject) {
}

FRotator URsBlueprintLibrary::InegrateAngularVelocity(const FRotator& InRotation, const FVector& inAngularVelocity, float DeltaTime) {
    return FRotator{};
}

void URsBlueprintLibrary::IncreaseShadowCacheOverBudgetRetention(UObject* WorldContextObject, float TempRetentionTime, float InDuration) {
}

bool URsBlueprintLibrary::HasSurfaceTweak(const FRsTopology& Topology, const FName AttributeName) {
    return false;
}

bool URsBlueprintLibrary::HasNavigationPermissions(const FRsTopology& Topology, const FRsBitfield_NavPermissionFlags& requiredNavPermissions) {
    return false;
}

bool URsBlueprintLibrary::HasHitSurfaceTweak(const FHitResult& Hit, const FName AttributeName) {
    return false;
}

bool URsBlueprintLibrary::HasAnyNavigationPermissions(const FRsTopology& Topology, const FRsBitfield_NavPermissionFlags& requiredNavPermissions) {
    return false;
}

FVector URsBlueprintLibrary::GetUnitAxis(const FTransform& T, const TEnumAsByte<EAxis::Type> Axis) {
    return FVector{};
}

float URsBlueprintLibrary::GetTopologyCoveragePercentile(const FRsTopology& Topology) {
    return 0.0f;
}

bool URsBlueprintLibrary::GetElement(FRsSurveyPOI& POI, const FRsSurveyPOIArray& poiArray, const int32 I) {
    return false;
}

FString URsBlueprintLibrary::GetCurrentMapName() {
    return TEXT("");
}

float URsBlueprintLibrary::GetCurrentExposure(APlayerController* PlayerController) {
    return 0.0f;
}

void URsBlueprintLibrary::ClearNavigationPermissionDetails(UPrimitiveComponent* PrimitiveComponent) {
}

bool URsBlueprintLibrary::CheckComponentAndMaterialHasNavigationPermissions(const UPrimitiveComponent* Component, const UPhysicalMaterial* PhysicalMaterial, const FRsBitfield_NavPermissionFlags& requiredNavPermissions) {
    return false;
}

float URsBlueprintLibrary::CalculateLeaningAngle(const FVector& Velocity, const FVector& AngularVelocity, const FVector& Gravity, const float Radius, const float DeadZone) {
    return 0.0f;
}

void URsBlueprintLibrary::CalculateCollisionImpulse(FVector& outLinVelA, FVector& outAngVelA, FVector& outLinVelB, FVector& outAngVelB, const FVector& inLinVelA, const FVector& inAngVelA, UPrimitiveComponent* A, UPrimitiveComponent* B, const FHitResult& inHitResult) {
}

void URsBlueprintLibrary::AsVectorAndW(FVector& V, float& W, const FVector4 v4) {
}

FTransform URsBlueprintLibrary::AsTransform(const FRsGeoLocator& Locator) {
    return FTransform{};
}

FRsGeoLocator URsBlueprintLibrary::AsSkeletalGeoLocator(USkeletalMeshComponent* SkeletalMesh, const FName BoneName, const FTransform& T, const ERsBase base) {
    return FRsGeoLocator{};
}

FRsGeoLocator URsBlueprintLibrary::AsPrimitiveGeoLocator(UPrimitiveComponent* Primitive, const FName BoneName, const FTransform& T, const ERsBase base) {
    return FRsGeoLocator{};
}

bool URsBlueprintLibrary::AllHaveMatchingNavigationPermissions(const FRsTopology& Topology, const FRsBitfield_NavPermissionFlags& requiredNavPermissions) {
    return false;
}

URsBlueprintLibrary::URsBlueprintLibrary() {
    // Null default object.
}

