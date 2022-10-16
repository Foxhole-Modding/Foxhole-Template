#include "WatchTower.h"
#include "MapIntelligenceSourceComponent.h"
#include "TeamFlagMeshComponent.h"

AWatchTower::AWatchTower() {
    this->MapIntelligenceSourceComponent = CreateDefaultSubobject<UMapIntelligenceSourceComponent>(TEXT("MapIntelligenceSource"));
    this->TeamFlagMeshComponent = CreateDefaultSubobject<UTeamFlagMeshComponent>(TEXT("TeamFlagMesh"));
}

