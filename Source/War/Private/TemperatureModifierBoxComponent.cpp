#include "TemperatureModifierBoxComponent.h"

class UPrimitiveComponent;
class AActor;

void UTemperatureModifierBoxComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UTemperatureModifierBoxComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UTemperatureModifierBoxComponent::UTemperatureModifierBoxComponent() {
}

