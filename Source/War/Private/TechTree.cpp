#include "TechTree.h"
#include "Net/UnrealNetwork.h"

void ATechTree::OnRep_TechUnlockBits(const TArray<uint32>& PreviousTechUnlockBits) {
}

void ATechTree::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATechTree, Categories);
    DOREPLIFETIME(ATechTree, TechUnlockBits);
    DOREPLIFETIME(ATechTree, TechUnlockProgress);
}

ATechTree::ATechTree() {
    this->TechUnlockBits.AddDefaulted(6);
}

