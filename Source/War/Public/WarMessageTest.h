#pragma once
#include "CoreMinimal.h"
#include "ETestEnum.h"
#include "WarMessageTest.generated.h"

USTRUCT(BlueprintType)
struct FWarMessageTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TestBool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TestStr;
    
    UPROPERTY(EditAnywhere)
    ETestEnum TestEnum;
    
    WAR_API FWarMessageTest();
};

