#pragma once
#include "CoreMinimal.h"
#include "ETechComponentID.h"
#include "EInfrastructureType.h"
#include "TechTreeComponentItem.generated.h"

USTRUCT(BlueprintType)
struct FTechTreeComponentItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETechComponentID TechID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETechComponentID NextTechID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInfrastructureType InfrastructureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Requirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ModRequirement;
    
    WAR_API FTechTreeComponentItem();
};

