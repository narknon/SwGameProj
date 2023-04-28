#include "SwSimpleDestructible_MaterialInstance.h"

FSwSimpleDestructible_MaterialInstance::FSwSimpleDestructible_MaterialInstance() {
    this->DoNotActivate = false;
    this->MaterialRef = NULL;
    this->ElementIndex = 0;
    this->InitialTimeDelay = 0.00f;
    this->TotalTimeToChangeParameterFromInitialToTargetValue = 0.00f;
    this->ParameterInitialValue = 0.00f;
    this->ParameterTargetValue = 0.00f;
}

