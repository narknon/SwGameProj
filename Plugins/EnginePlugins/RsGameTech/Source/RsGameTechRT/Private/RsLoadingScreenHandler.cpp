#include "RsLoadingScreenHandler.h"
#include "Templates/SubclassOf.h"

URsLoadingScreenHandler* URsLoadingScreenHandler::CreateAndRunLoadingScreenHandler(UObject* WorldContextObject, TSubclassOf<URsUiLoadingScreen> LoadingScreenType, const FRsLoadingScreenHandlerGetEvent& IsFinishedLoadingCheck, const bool bAutoCloseScreenOnCompletion, int32 ZOrder) {
    return NULL;
}

URsLoadingScreenHandler::URsLoadingScreenHandler() {
    // Null default object.
}

