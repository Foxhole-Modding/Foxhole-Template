#pragma once
#include "CoreMinimal.h"
#include "RenameSquadWarMessage.generated.h"

USTRUCT(BlueprintType)
struct FRenameSquadWarMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewName;
    
    WAR_API FRenameSquadWarMessage();
};

