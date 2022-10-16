#pragma once
#include "CoreMinimal.h"
#include "EMapIntelligenceType.h"
#include "UObject/NoExportTypes.h"
#include "MapIntelligenceItem.generated.h"

USTRUCT(BlueprintType)
struct FMapIntelligenceItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapIntelligenceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D NormalizedMapLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStructureWasAttackedRecently;
    
    UPROPERTY(EditAnywhere)
    uint8 ListeningTeamID;
    
    WAR_API FMapIntelligenceItem();
};

