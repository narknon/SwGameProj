#include "SwUICameraController.h"

ARsCameraManager* ASwUICameraController::GetRsCameraManager() const {
    return NULL;
}

ASwUICameraController::ASwUICameraController() {
    this->OriginalController = NULL;
    this->OriginalPlayer = NULL;
    this->RsCameraManager = NULL;
}

