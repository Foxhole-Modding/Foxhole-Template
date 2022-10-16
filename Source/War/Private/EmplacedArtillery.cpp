#include "EmplacedArtillery.h"
#include "Net/UnrealNetwork.h"
#include "OccupiableComponent.h"
#include "Components/BoxComponent.h"

void AEmplacedArtillery::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEmplacedArtillery, RequiredSquadMembers);
    DOREPLIFETIME(AEmplacedArtillery, SquadId);
}

AEmplacedArtillery::AEmplacedArtillery() {
    this->RotatorMountComponent = NULL;
    this->RotatorOccupiableComponent = CreateDefaultSubobject<UOccupiableComponent>(TEXT("RotatorOccupiableComponent"));
    this->GunnerTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("GunnerTrigger"));
    this->RotatorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("RotatorTrigger"));
    this->RequiredSquadMembers = 3;
    this->SquadId = 0;
}

