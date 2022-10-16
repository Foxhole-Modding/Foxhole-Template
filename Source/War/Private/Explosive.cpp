#include "Explosive.h"
#include "Net/UnrealNetwork.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

void AExplosive::OnRep_Exploded() {
}

void AExplosive::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AExplosive, bExplosionEffectsTrigger);
    DOREPLIFETIME(AExplosive, TeamId);
}

AExplosive::AExplosive() {
    this->DetonationDelay = 0.00f;
    this->CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
    this->ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
    this->ExplosionOffsetZ = 0.00f;
    this->DamageDelay = 0.50f;
    this->ExplosionTemplate = NULL;
    this->DestroyObstacleRadius = 0.00f;
    this->SubExplosionCount = 1;
    this->ExplosionLength = 300.00f;
    this->bExplosionEffectsTrigger = false;
    this->TeamId = 255;
}

