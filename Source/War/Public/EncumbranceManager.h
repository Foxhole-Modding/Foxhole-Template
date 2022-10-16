#pragma once
#include "CoreMinimal.h"
#include "EncumbranceModifiers.h"
#include "EncumbranceManager.generated.h"

USTRUCT(BlueprintType)
struct FEncumbranceManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableEncumbranceModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEncumbranceModifiers EncumbranceModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentEncumbrance;
    
public:
    WAR_API FEncumbranceManager();
};

