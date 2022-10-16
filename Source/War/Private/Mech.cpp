#include "Mech.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"

void AMech::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMech, MainGunYawAndPitch);
    DOREPLIFETIME(AMech, LeftGunYawAndPitch);
    DOREPLIFETIME(AMech, RightGunYawAndPitch);
}

AMech::AMech() {
    this->MainGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MainGunMuzzleLocation"));
    this->LeftGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("LeftGunMuzzleLocation"));
    this->RightGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("RightGunMuzzleLocation"));
    this->PackagedMesh = NULL;
    this->StashedMainGunAmmo = 0;
    this->StashedLeftGunAmmo = 0;
    this->StashedRightGunAmmo = 0;
}

