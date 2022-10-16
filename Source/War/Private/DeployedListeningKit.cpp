#include "DeployedListeningKit.h"
#include "ListeningAreaComponent.h"

ADeployedListeningKit::ADeployedListeningKit() {
    this->ListeningAreaComponent = CreateDefaultSubobject<UListeningAreaComponent>(TEXT("ListeningAreaComponent"));
}

