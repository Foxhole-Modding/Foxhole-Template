#include "TrainPassengerMountComponent.h"

class AActor;

void UTrainPassengerMountComponent::ServerSubmitItems_Implementation(AActor* TargetActor) {
}
bool UTrainPassengerMountComponent::ServerSubmitItems_Validate(AActor* TargetActor) {
    return true;
}

UTrainPassengerMountComponent::UTrainPassengerMountComponent() {
}

