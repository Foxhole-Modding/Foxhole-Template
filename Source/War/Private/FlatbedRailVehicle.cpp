#include "FlatbedRailVehicle.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

void AFlatbedRailVehicle::OnRep_ShippableData() {
}

void AFlatbedRailVehicle::OnRep_CurrentShippable() {
}

void AFlatbedRailVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFlatbedRailVehicle, CurrentShippable);
    DOREPLIFETIME(AFlatbedRailVehicle, ShippableData);
}

AFlatbedRailVehicle::AFlatbedRailVehicle() {
    this->BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
    this->RopeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RopeMesh"));
    this->DynamicMeshComponent = NULL;
    this->TransferLocation = CreateDefaultSubobject<USceneComponent>(TEXT("TransferLocation"));
    this->GlobalShippableInfo = NULL;
}

