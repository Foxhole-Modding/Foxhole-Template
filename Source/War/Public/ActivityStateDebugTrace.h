#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EActivityStateDebugTraceType.h"
#include "ECharacterActivityState.h"
#include "ActivityStateDebugTrace.generated.h"

USTRUCT(BlueprintType)
struct FActivityStateDebugTrace {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double Timestamp;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ENetRole> Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityStateDebugTraceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterActivityState ActivityState;
    
    UPROPERTY(EditAnywhere)
    uint8 SequenceNumber;
    
    WAR_API FActivityStateDebugTrace();
};

