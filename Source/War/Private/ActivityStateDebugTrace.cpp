#include "ActivityStateDebugTrace.h"

FActivityStateDebugTrace::FActivityStateDebugTrace() {
    this->Timestamp = 0.00f;
    this->Role = ROLE_None;
    this->Type = EActivityStateDebugTraceType::None;
    this->ActivityState = ECharacterActivityState::Idle;
    this->SequenceNumber = 0;
}

