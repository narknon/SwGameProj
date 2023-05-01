#include "SwBTTask_ResumeDefaultBehaviorFsm.h"

void USwBTTask_ResumeDefaultBehaviorFsm::SetResetHomePosition(bool bValue) {
}

bool USwBTTask_ResumeDefaultBehaviorFsm::IsResetHomePosition() const {
    return false;
}

USwBTTask_ResumeDefaultBehaviorFsm::USwBTTask_ResumeDefaultBehaviorFsm() {
    this->bResetHomePosition = true;
}

