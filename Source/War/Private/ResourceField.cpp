#include "ResourceField.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"

void AResourceField::OnRep_ResourceFieldMeshLevel() {
}

void AResourceField::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AResourceField, ResourceFieldMeshLevel);
}

AResourceField::AResourceField() {
    this->ResourceFieldMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ResourceFieldMesh"));
    this->NoBuildVolume = CreateDefaultSubobject<USphereComponent>(TEXT("NoBuildVolume"));
    this->ResourceFieldMesh1 = NULL;
    this->ResourceFieldMesh2 = NULL;
    this->ResourceFieldMesh3 = NULL;
    this->ResourceClass = NULL;
    this->SpawnPeriod = 20.00f;
    this->MaxConcurrentNodes = 30;
    this->MinSpawnDistance = 250.00f;
    this->MaxSpawnDistance = 1200.00f;
    this->ResourcesPerReplenishment = 1000;
    this->ResourcesLeftToSpawn = 1;
    this->ResourceFieldMeshLevel = 0;
    this->TimeToReplenish = 28800.00f;
    this->ResourceFieldId = 0;
    this->RemainingTimeToReplenish = 0.00f;
    this->LandscapeTraceDistance = 1000.00f;
    this->SpawnActorCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->ResourceNodeSphereColliderRadius = 150.00f;
    this->bIgnoredByResourceRolling = false;
    this->ChanceToSpawnSecondaryNormalized = 0.05f;
    this->SecondaryResourceToSpawn = NULL;
}

