#include "VisibilityToggleAreaComponent.h"

class UPrimitiveComponent;
class AActor;

void UVisibilityToggleAreaComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UVisibilityToggleAreaComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UVisibilityToggleAreaComponent::UVisibilityToggleAreaComponent() {
    this->ToggleableComponentsTag = TEXT("VToggle");
    this->bBlockVehicles = true;
}

