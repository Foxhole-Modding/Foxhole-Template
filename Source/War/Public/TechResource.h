#pragma once
#include "CoreMinimal.h"
#include "EFactionId.h"
#include "ETechResourceID.h"
#include "TechResource.generated.h"

USTRUCT(BlueprintType)
struct FTechResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFactionId FactionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETechResourceID ID;
    
    UPROPERTY(EditAnywhere)
    int16 Amount;
    
    WAR_API FTechResource();
};

