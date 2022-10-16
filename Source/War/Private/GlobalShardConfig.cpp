#include "GlobalShardConfig.h"

FGlobalShardConfig::FGlobalShardConfig() {
    this->DefaultShardId = 0;
    this->bEnableOverpopMode = false;
    this->bRedirectToShardSelector = false;
    this->OverpopShardId = 0;
    this->bEnableRandomHomeRegion = false;
    this->DeployDelayMin = 0;
    this->DeployDelayMax = 0;
    this->PreConquestDeployDelayMin = 0;
    this->PreConquestDeployDelayMax = 0;
}

