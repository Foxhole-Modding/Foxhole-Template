#pragma once
#include "CoreMinimal.h"
#include "PowerGridInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPowerGridInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 PowerDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 MaxConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerProvided;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PowerConsumed;
    
private:
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AActor> Connections[4];
    
    UPROPERTY(EditAnywhere, NotReplicated, SaveGame)
    FName ConnectionNames[4];
    
public:
    WAR_API FPowerGridInfo();
};

