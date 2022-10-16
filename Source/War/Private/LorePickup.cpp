#include "LorePickup.h"
#include "ReadableTextComponent.h"

ALorePickup::ALorePickup() {
    this->ReadableTextComponent = CreateDefaultSubobject<UReadableTextComponent>(TEXT("ReadableTextComponent"));
}

