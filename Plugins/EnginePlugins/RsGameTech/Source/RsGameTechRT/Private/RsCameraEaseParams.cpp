#include "RsCameraEaseParams.h"

FRsCameraEaseParams::FRsCameraEaseParams() {
    this->EaseFunction = ERsCameraEaseFunction::Linear;
    this->Exponent = 0.00f;
    this->TangentIn = 0.00f;
    this->TangentOut = 0.00f;
}

