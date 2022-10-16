#pragma once
#include "CoreMinimal.h"
#include "Engine/NetConnection.h"
#include "WarBenchmarkNetConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API UWarBenchmarkNetConnection : public USimulatedClientNetConnection {
    GENERATED_BODY()
public:
    UWarBenchmarkNetConnection();
};

