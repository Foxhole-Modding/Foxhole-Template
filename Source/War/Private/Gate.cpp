#include "Gate.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"

void AGate::OnRep_GateState() {
}

void AGate::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGate, GateState);
}

AGate::AGate() {
    this->OpeningSoundCue = NULL;
    this->NoBuildCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("NoBuildCollider"));
    this->GateCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("GateCollider"));
    this->GateDoorMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GateDoorMesh"));
    this->GateCollisionProfileName = TEXT("StructureDamageableMesh");
    this->GateState = EGateState::Closed;
}

