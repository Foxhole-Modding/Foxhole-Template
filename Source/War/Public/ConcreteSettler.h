#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConcreteSettler.generated.h"

USTRUCT(BlueprintType)
struct FConcreteSettler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, SaveGame)
    int64 StartTimeDateTimeTicks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float ConcreteSettleDurationMins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float RoughnessStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float RoughnessEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FLinearColor ColourStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FLinearColor ColourEnd;
    
public:
    WAR_API FConcreteSettler();
};

