#include "MapMarker.h"
#include "Components/TextRenderComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"

class UPrimitiveComponent;
class AActor;

void AMapMarker::BeginMarkerOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AMapMarker::AMapMarker() {
    this->ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("StructureArrow"));
    this->MarkerArea = CreateDefaultSubobject<UBoxComponent>(TEXT("MarkerArea"));
    this->MajorTextRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("MajorTextRender"));
    this->MinorTextRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("MinorTextRender"));
    this->MapMarkerType = EMapMarkerType::Minor;
}

