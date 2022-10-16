#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMapMarkerType.h"
#include "MapTextItem.generated.h"

USTRUCT(BlueprintType)
struct FMapTextItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NormalizedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapMarkerType MapMarkerType;
    
    WAR_API FMapTextItem();
};

