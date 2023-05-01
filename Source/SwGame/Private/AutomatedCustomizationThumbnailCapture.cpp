#include "AutomatedCustomizationThumbnailCapture.h"

UAutomatedCustomizationThumbnailCapture::UAutomatedCustomizationThumbnailCapture() : UMovieSceneCapture(FObjectInitializer::Get()) {
    this->FunctionLibraryClass = NULL;
    this->LevelSequencePlayer = NULL;
    this->Function = NULL;
    this->DataTable = NULL;
}

