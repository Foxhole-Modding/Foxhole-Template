#include "DeploymentQueueEntry.h"

FDeploymentQueueEntry::FDeploymentQueueEntry() {
    this->Controller = NULL;
    this->TargetMapId = EWorldConquestMapId::Invalid;
    this->bIsRecovery = false;
}

