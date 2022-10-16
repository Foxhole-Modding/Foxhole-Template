#include "SignPost.h"
#include "Net/UnrealNetwork.h"

void ASignPost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASignPost, Text);
    DOREPLIFETIME(ASignPost, VoteList);
    DOREPLIFETIME(ASignPost, LastEditedTimeTicks);
}

ASignPost::ASignPost() {
    this->HealPerUpVote = 20;
    this->DamagePerDownVote = 170;
    this->LastEditedTimeTicks = 0;
    this->bIsWorldSignPost = false;
}

