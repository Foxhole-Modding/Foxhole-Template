#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PathSocket.generated.h"

class UBuildSocketComponent;

USTRUCT(BlueprintType)
struct FPathSocket {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float PackedAlpha;
    
    UPROPERTY(EditAnywhere, Export, NotReplicated, Transient)
    TWeakObjectPtr<UBuildSocketComponent> Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle CleanupHandle;
    
    WAR_API FPathSocket();
};

