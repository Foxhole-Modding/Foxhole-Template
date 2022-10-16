#include "MapIcon.h"
#include "Components/SceneComponent.h"

AMapIcon::AMapIcon() {
    this->MapTeamId = EMapTeamId::Colonial;
    this->MapIconType = EMapIconType::None;
    this->DefaultSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MapIcon"));
}

