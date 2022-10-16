#include "ShootingRangeArea.h"
#include "Components/BoxComponent.h"

class AActor;

void AShootingRangeArea::OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
}

void AShootingRangeArea::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor) {
}

AShootingRangeArea::AShootingRangeArea() {
    this->ShootingRangeComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ShootingRangeComponent"));
}

