#include "VehicleDeploymentLogic.h"

FVehicleDeploymentLogic::FVehicleDeploymentLogic() {
    this->bRequiresDeployment = false;
    this->bRequiresHorizontalResetForUndeployment = false;
    this->UndeployedAngle = 0.00f;
    this->bDeployed = false;
    this->DeploymentTime = 0.00f;
    this->HorizontalResetSpeed = 0.00f;
}

