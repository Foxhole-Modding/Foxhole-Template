#include "ConcreteMixer.h"
#include "Net/UnrealNetwork.h"
#include "Components/SkeletalMeshComponent.h"

bool AConcreteMixer::IsRefining() const {
    return false;
}

void AConcreteMixer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AConcreteMixer, ResourceConverter);
}

AConcreteMixer::AConcreteMixer() {
    this->MeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
    this->PackagedMesh = NULL;
}

