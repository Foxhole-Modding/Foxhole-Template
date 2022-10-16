#include "WorkItemComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class USceneComponent;

void UWorkItemComponent::ServerPerformWork_Implementation(AActor* InTargetActor, USceneComponent* InTargetActorComponent, FActivityStateChange ActivityStateChange) {
}
bool UWorkItemComponent::ServerPerformWork_Validate(AActor* InTargetActor, USceneComponent* InTargetActorComponent, FActivityStateChange ActivityStateChange) {
    return true;
}

void UWorkItemComponent::OnRep_IsEquipped() {
}

void UWorkItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWorkItemComponent, bIsEquipped);
}

UWorkItemComponent::UWorkItemComponent() {
    this->SkeletalMesh = NULL;
    this->ImpactEffect = NULL;
    this->WorkSoundCue = NULL;
    this->QueryOffset = 20.00f;
    this->MaxRange = 150;
    this->bIsEquipped = false;
}

