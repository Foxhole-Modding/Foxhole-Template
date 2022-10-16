#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "UObject/NoExportTypes.h"
#include "RegionMinimalData.generated.h"

USTRUCT(BlueprintType)
struct FRegionMinimalData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId StarterRegionTeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> ColonialStarterRegionZones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> WardenStarterRegionZones;
    
    WAR_API FRegionMinimalData();
};

