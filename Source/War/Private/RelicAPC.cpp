#include "RelicAPC.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"

void ARelicAPC::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARelicAPC, LeftGunYawAndPitch);
    DOREPLIFETIME(ARelicAPC, RightGunYawAndPitch);
}

ARelicAPC::ARelicAPC() {
    this->LeftGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("LeftGunMuzzleLocation"));
    this->RightGunMuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("RightGunMuzzleLocation"));
    this->StashedLeftGunAmmo = 0;
    this->StashedRightGunAmmo = 0;
}

