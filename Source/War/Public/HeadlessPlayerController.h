#pragma once
#include "CoreMinimal.h"
#include "SimPlayerController.h"
#include "HeadlessPlayerController.generated.h"

UCLASS(Blueprintable)
class WAR_API AHeadlessPlayerController : public ASimPlayerController {
    GENERATED_BODY()
public:
    AHeadlessPlayerController();
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientParseCommand(const FString& CommandString);
    
};

