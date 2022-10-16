#pragma once
#include "CoreMinimal.h"
#include "SquadMember.h"
#include "SquadInviteInfo.generated.h"

USTRUCT(BlueprintType)
struct FSquadInviteInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SquadName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSquadMember LeaderMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetOnlineID;
    
    UPROPERTY(EditAnywhere)
    int8 FactionId;
    
    WAR_API FSquadInviteInfo();
};

