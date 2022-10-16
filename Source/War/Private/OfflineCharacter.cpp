#include "OfflineCharacter.h"
#include "Net/UnrealNetwork.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

void AOfflineCharacter::MulticastApplyFatalHit_Implementation() {
}


void AOfflineCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOfflineCharacter, TeamId);
    DOREPLIFETIME(AOfflineCharacter, VisualCustomizationMask);
    DOREPLIFETIME(AOfflineCharacter, ZombieType);
    DOREPLIFETIME(AOfflineCharacter, Temperature);
    DOREPLIFETIME(AOfflineCharacter, Muddyness);
}

AOfflineCharacter::AOfflineCharacter() {
    this->CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->CharacterMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("OfflineCharacterMesh"));
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    this->Hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hands"));
    this->Legs = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Legs"));
    this->Back = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Back"));
    this->Helmet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet"));
    this->TeamId = 255;
    this->VisualCustomizationMask = 255;
    this->ZombieType = EZombieType::None;
    this->Temperature = 100;
    this->Muddyness = 0;
    this->CurrentHealth = 0.00f;
    this->MaxHealth = 100.00f;
    this->DeathDuration = 0.00f;
}

