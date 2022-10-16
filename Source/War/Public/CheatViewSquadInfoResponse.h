#pragma once
#include "CoreMinimal.h"
#include "UObjectHandle.h"
#include "CheatViewSquadInfoResponse.generated.h"

USTRUCT(BlueprintType)
struct FCheatViewSquadInfoResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUObjectHandle Admin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderName;
    
    UPROPERTY(EditAnywhere)
    int16 MemberCount;
    
    UPROPERTY(EditAnywhere)
    int16 InactiveMemberCount;
    
    WAR_API FCheatViewSquadInfoResponse();
};

