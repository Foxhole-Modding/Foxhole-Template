#pragma once
#include "CoreMinimal.h"
#include "AssemblyItem.generated.h"

USTRUCT(BlueprintType)
struct FAssemblyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredCodeName;
    
    WAR_API FAssemblyItem();
};

