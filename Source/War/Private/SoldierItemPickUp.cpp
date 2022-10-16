#include "SoldierItemPickUp.h"
#include "Components/SkeletalMeshComponent.h"

ASoldierItemPickUp::ASoldierItemPickUp() {
    this->Torso = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Torso"));
    this->Legs = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Legs"));
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    this->Hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hands"));
    this->Helmet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet"));
}

