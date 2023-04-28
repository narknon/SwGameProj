#include "RsCustomizationPiece.h"

void URsCustomizationPiece::WaitUntilAsyncLoadComplete() {
}

void URsCustomizationPiece::UnloadAsyncAssets() {
}

void URsCustomizationPiece::SetCurrentMaterialSwatchIndex(int32 Index) {
}

void URsCustomizationPiece::LoadAsyncAssets(ECustomizationStreamingTier Tier, const FRsOnCustomizationPieceLoadCompleteDelegate& OnLoadCompleteDelegate) {
}

bool URsCustomizationPiece::IsAsyncLoadComplete() const {
    return false;
}

int32 URsCustomizationPiece::GetCurrentMaterialSwatchIndex() const {
    return 0;
}

ECustomizationStreamingTier URsCustomizationPiece::GetAsyncLoadTier() const {
    return ECustomizationStreamingTier::None;
}

URsCustomizationPiece::URsCustomizationPiece() {
    // Null default object.
}

