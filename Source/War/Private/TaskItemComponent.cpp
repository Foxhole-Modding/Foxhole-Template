#include "TaskItemComponent.h"
#include "Net/UnrealNetwork.h"

void UTaskItemComponent::ServerTryStartTask_Implementation(FActivityStateChange ActivityStateChange) {
}
bool UTaskItemComponent::ServerTryStartTask_Validate(FActivityStateChange ActivityStateChange) {
    return true;
}

void UTaskItemComponent::ServerStopInvokeTask_Implementation() {
}
bool UTaskItemComponent::ServerStopInvokeTask_Validate() {
    return true;
}

void UTaskItemComponent::OnRep_IsEquipped() {
}

void UTaskItemComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTaskItemComponent, bIsEquipped);
}

UTaskItemComponent::UTaskItemComponent() {
    this->ItemMesh = NULL;
    this->StartTaskSoundCue = NULL;
    this->TaskActivityState = ECharacterActivityState::Idle;
    this->MaxRangeToTarget = 100.00f;
    this->StartTaskText = FText::FromString(TEXT("Starting Task"));
    this->EndTaskText = FText::FromString(TEXT("Ending Task"));
    this->LoopDuration = 0.00f;
    this->TargetCheckMethod = ETaskItemTargetCheckMethod::None;
    this->bIsEquipped = false;
}

