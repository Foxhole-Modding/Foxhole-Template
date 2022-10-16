#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EConnectorConfigurationFlag.h"
#include "UObject/NoExportTypes.h"
#include "ConnectorConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FConnectorConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    int8 SocketIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FQuat TargetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsUnderRoad;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 CustomData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EConnectorConfigurationFlag Flags;
    
    WAR_API FConnectorConfiguration();
};

