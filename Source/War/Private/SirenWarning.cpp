#include "SirenWarning.h"
#include "Components/ArrowComponent.h"

ASirenWarning::ASirenWarning() {
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
}

