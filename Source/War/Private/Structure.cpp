#include "Structure.h"
#include "Net/UnrealNetwork.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"
#include "StealthComponent.h"

class AWarCharacter;
class UTechTreeComponent;

void AStructure::Use(AWarCharacter* UsingPlayer) {
}

void AStructure::UpdateFireSpreadWindInfo() {
}

void AStructure::OnRep_IsPrototype() {
}

void AStructure::OnRep_Health() {
}

void AStructure::OnRep_FireIntensity(EFireIntensity Previous) {
}

void AStructure::OnRep_DynamicTier() {
}

void AStructure::MulticastOnVehicleDrivingOverDamage_Implementation() {
}
bool AStructure::MulticastOnVehicleDrivingOverDamage_Validate() {
    return true;
}

bool AStructure::IsCollidingWithDuplicate() const {
    return false;
}

UTechTreeComponent* AStructure::GetTechTreeComponent() const {
    return NULL;
}




void AStructure::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStructure, ItemHolderItems);
    DOREPLIFETIME(AStructure, Health);
    DOREPLIFETIME(AStructure, DynamicTier);
    DOREPLIFETIME(AStructure, bIsPrototype);
    DOREPLIFETIME(AStructure, BuilderPlayerOnlineID);
    DOREPLIFETIME(AStructure, BuilderName);
    DOREPLIFETIME(AStructure, FireIntensity);
}

AStructure::AStructure() {
    this->ProfileType = EStructureProfileType::Default;
    this->ArmourType = EArmourType::NoArmour;
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("StructureArrow"));
    this->UseAreaBox = CreateDefaultSubobject<UBoxComponent>(TEXT("UseAreaBox"));
    this->KillVolume = NULL;
    this->DestroyedFX = NULL;
    this->ItemHolder = NULL;
    this->TechID = ETechID::None;
    this->GarrisonComponent = NULL;
    this->InfrastructureComponent = NULL;
    this->MeshVisibilityComponent = NULL;
    this->MountComponent = NULL;
    this->MaxHealth = 0;
    this->Health = 20;
    this->DynamicTier = EDynamicTier::Default;
    this->MapIconType = EMapIconType::None;
    this->bRotateDropLocation = false;
    this->IsVaultable = true;
    this->ScreenToUse = ESimScreen::None;
    this->DecayRemainingTime = 0.00f;
    this->MapIntelligenceType = EMapIntelligenceType::None;
    this->StructureFlags = 0;
    this->StructureNetRelevancySize = EStructureNetRelevancySize::Medium;
    this->bIsStockpilable = false;
    this->bIsReserveStockpiled = false;
    this->bIsBuiltNearBorder = false;
    this->bIgnoresRapidDecay = false;
    this->bIsPrototype = false;
    this->bAddLandscapeHolesOnBeginPlay = true;
    this->bRemoveLandscapeHolesOnDestroy = true;
    this->bHasLandscapeHoles = false;
    this->bHasRemovedLandscapeHoles = false;
    this->StealthComponent = CreateDefaultSubobject<UStealthComponent>(TEXT("StealthComponent"));
    this->StructureFlameCountFactor = 1.00f;
    this->DecaySupplyDrain = 1;
    this->FireIntensity = EFireIntensity::None;
    this->PreMitigationFireDamagePerTick = 0.00f;
    this->BurningHeatArea = NULL;
    this->FireSpreadFX = NULL;
}

