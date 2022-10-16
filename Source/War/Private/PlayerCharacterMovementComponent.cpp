#include "PlayerCharacterMovementComponent.h"

class UPrimitiveComponent;
class AActor;

void UPlayerCharacterMovementComponent::CapsuleEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UPlayerCharacterMovementComponent::CapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UPlayerCharacterMovementComponent::UPlayerCharacterMovementComponent() {
    this->MaxWalkSpeedProne = 80.00f;
    this->ProneHalfHeight = 55.00f;
    this->ImmersionDepthHeightBias = 25.00f;
    this->WaterFrictionCoefficient = 0.10f;
}

