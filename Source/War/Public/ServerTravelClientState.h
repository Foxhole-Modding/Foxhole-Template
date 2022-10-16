#pragma once
#include "CoreMinimal.h"
#include "EWarServerType.h"
#include "EServerTravelStatusOnClient.h"
#include "EServerTravelOriginType.h"
#include "ServerTravelClientState.generated.h"

USTRUCT(BlueprintType)
struct FServerTravelClientState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EServerTravelStatusOnClient Status;
    
    UPROPERTY(EditAnywhere)
    EServerTravelOriginType OriginType;
    
    UPROPERTY(EditAnywhere)
    EWarServerType OriginServerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBorderTravel;
    
    WAR_API FServerTravelClientState();
};

