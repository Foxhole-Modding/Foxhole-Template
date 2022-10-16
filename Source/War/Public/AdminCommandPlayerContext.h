#pragma once
#include "CoreMinimal.h"
#include "AdminCommandPlayerContext.generated.h"

class ASimPlayerController;
class UWorld;

USTRUCT(BlueprintType)
struct FAdminCommandPlayerContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASimPlayerController* AdminSimController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AdminPlayerName;
    
public:
    WAR_API FAdminCommandPlayerContext();
};

