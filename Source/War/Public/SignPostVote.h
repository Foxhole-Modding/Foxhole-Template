#pragma once
#include "CoreMinimal.h"
#include "SignPostVote.generated.h"

USTRUCT(BlueprintType)
struct FSignPostVote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VoterOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUpVote;
    
    WAR_API FSignPostVote();
};

