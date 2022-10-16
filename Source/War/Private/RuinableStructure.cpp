#include "RuinableStructure.h"
#include "RuinedComponent.h"

ARuinableStructure::ARuinableStructure() {
    this->bShowRuinedInEditor = false;
    this->RuinedComponent = CreateDefaultSubobject<URuinedComponent>(TEXT("RuinedComponent"));
}

