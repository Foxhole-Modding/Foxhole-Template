#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "AnalyticsVehicleWrenchUnlockedInfo.generated.h"

USTRUCT(BlueprintType)
struct FAnalyticsVehicleWrenchUnlockedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VehicleCodeName;
    
    UPROPERTY(EditAnywhere)
    int16 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastDriverOnlineID;
    
    WAR_API FAnalyticsVehicleWrenchUnlockedInfo();
};

