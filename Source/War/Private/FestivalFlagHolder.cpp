#include "FestivalFlagHolder.h"
#include "Components/CapsuleComponent.h"

class UPrimitiveComponent;
class AActor;

void AFestivalFlagHolder::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AFestivalFlagHolder::AFestivalFlagHolder() {
    this->DropOffLocation = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Drop Off Location"));
}

