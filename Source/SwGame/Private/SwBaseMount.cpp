#include "SwBaseMount.h"

ASwBaseMount::ASwBaseMount() {
    this->SemiSleepDIstanceToPlayer = 1000.00f;
    this->MinPlayerDistanceCheckTime = 0.10f;
    this->NextPlayerDistanceCheckTime = -1.00f;
}

