#pragma once
#include "CoreMinimal.h"
#include "EInfrastructureType.h"
#include "TechTreeComponentVotes.generated.h"

USTRUCT(BlueprintType)
struct FTechTreeComponentVotes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInfrastructureType StaticBaseVote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInfrastructureType ForwardBaseVote;
    
    WAR_API FTechTreeComponentVotes();
};

