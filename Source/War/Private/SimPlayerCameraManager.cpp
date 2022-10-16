#include "SimPlayerCameraManager.h"
#include "Components/PostProcessComponent.h"

ASimPlayerCameraManager::ASimPlayerCameraManager() {
    this->PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcess"));
    this->FogMaterialDynamic = NULL;
}

