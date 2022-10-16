#include "Shippable.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"

void AShippable::OnRep_ShippableType() {
}

void AShippable::OnRep_ShippableData() {
}

void AShippable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AShippable, ShippableType);
    DOREPLIFETIME(AShippable, ShippableData);
}

AShippable::AShippable() {
    this->GlobalShippableInfo = NULL;
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->DynamicMeshComponent = NULL;
}

