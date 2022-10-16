#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "UObject/NoExportTypes.h"
#include "WorldMapRegionStyle.generated.h"

USTRUCT(BlueprintType)
struct WAR_API FWorldMapRegionStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle ButtonStyle;
    
    FWorldMapRegionStyle();
};

