#include "RefinementOrder.h"

FRefinementOrder::FRefinementOrder() {
    this->ResourcesRefinedPerMinute = 0.00f;
    this->RemainingSourceCount = 0;
    this->CompletedCount = 0.00f;
    this->ProgressForCurrentUnit = 0.00f;
    this->OrderOwnerFactionId = EFactionId::Colonials;
}

