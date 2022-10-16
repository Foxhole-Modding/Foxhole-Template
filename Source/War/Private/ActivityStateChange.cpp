#include "ActivityStateChange.h"

FActivityStateChange::FActivityStateChange() {
    this->LastAckedSequence = 0;
    this->Sequence = 0;
    this->State = ECharacterActivityState::Idle;
}

