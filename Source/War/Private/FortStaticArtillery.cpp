#include "FortStaticArtillery.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"
#include "TeamFlagMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"

void AFortStaticArtillery::OnRep_IsFiring() {
}

void AFortStaticArtillery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortStaticArtillery, ConcreteSettler);
    DOREPLIFETIME(AFortStaticArtillery, PowerInfo);
    DOREPLIFETIME(AFortStaticArtillery, HorizontalAngle);
    DOREPLIFETIME(AFortStaticArtillery, VerticalAngle);
    DOREPLIFETIME(AFortStaticArtillery, bIsFiring);
}

AFortStaticArtillery::AFortStaticArtillery() {
    this->SkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->FlagMesh = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("FlagMesh"));
    this->FireShellParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("FireShellParticleSystem"));
    this->MinDistance = 0.00f;
    this->MaxDistance = 0.00f;
    this->FiringAngle = 0.00f;
    this->FiringCooldown = 0.00f;
    this->MinVerticalAngle = 0.00f;
    this->MaxVerticalAngle = 0.00f;
    this->InitialDelay = 0.00f;
    this->ExplosionDelay = 0.00f;
    this->HorizontalAngle = 0.00f;
    this->VerticalAngle = 45.00f;
    this->bIsFiring = false;
}

