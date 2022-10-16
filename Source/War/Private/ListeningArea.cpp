#include "ListeningArea.h"
#include "ListeningAreaComponent.h"

AListeningArea::AListeningArea() {
    this->LifeSpanRemaining = 0.00f;
    this->ListeningComponent = CreateDefaultSubobject<UListeningAreaComponent>(TEXT("ListeningComponent"));
}

