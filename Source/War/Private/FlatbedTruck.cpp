#include "FlatbedTruck.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

void AFlatbedTruck::OnRep_ShippableData() {
}

void AFlatbedTruck::OnRep_CurrentShippable() {
}

void AFlatbedTruck::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlatbedTruck, CurrentShippable);
    DOREPLIFETIME(AFlatbedTruck, ShippableData);
}

AFlatbedTruck::AFlatbedTruck() {
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->DynamicMeshComponent = NULL;
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->GlobalShippableInfo = NULL;
}

