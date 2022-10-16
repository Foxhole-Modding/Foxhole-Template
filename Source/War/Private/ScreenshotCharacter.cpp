#include "ScreenshotCharacter.h"
#include "Components/SkeletalMeshComponent.h"

AScreenshotCharacter::AScreenshotCharacter() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->Head = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Head"));
    this->Hands = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Hands"));
    this->Legs = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Legs"));
    this->Back = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Back"));
    this->Helmet = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet"));
    this->EquippedItemMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
    this->bSetMeshesDynamically = false;
    this->bAlwaysResetEquippedItemMesh = false;
    this->FactionId = EFactionId::Colonials;
    this->OutfitType = EOutfitType::Default;
    this->UniformType = EUniformType::Default;
    this->ZombieType = EZombieType::None;
    this->bIsFemale = false;
    this->SkinTone = 0;
    this->OverrideMaterial = NULL;
}

