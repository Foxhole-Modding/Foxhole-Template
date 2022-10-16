#include "ItemPickup.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

void AItemPickup::OnRep_ItemInstance() {
}

void AItemPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AItemPickup, ItemInstance);
}

AItemPickup::AItemPickup() {
    this->ItemComponentClass = NULL;
    this->Encumbrance = 20;
    this->EquippedEncumbrance = -1;
    this->bHideContent = false;
    this->Icon = NULL;
    this->EquipmentSlot = EEquipmentSlot::None;
    this->ItemCategory = EItemCategory::Misc;
    this->ItemFlagsMask = 1;
    this->ItemProfileType = EItemProfileType::Invalid;
    this->FactionVariant = EFactionId::NoTeam;
    this->TechID = ETechID::None;
    this->bIsLiquid = false;
    this->bIsLarge = false;
    this->bDoesNotDecay = false;
    this->bSupportsVehicleMounts = false;
    this->ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMesh"));
    this->ItemBox = CreateDefaultSubobject<UBoxComponent>(TEXT("ItemBox"));
}

