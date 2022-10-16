#pragma once
#include "CoreMinimal.h"
#include "MiscItemComponent.h"
#include "ActivityStateChange.h"
#include "UObject/NoExportTypes.h"
#include "ETransmitResponse.h"
#include "RadioBackpackItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API URadioBackpackItemComponent : public UMiscItemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRadius;
    
public:
    URadioBackpackItemComponent();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStopTransmittingLaunchCodes();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartTransmittingLaunchCodes(const FActivityStateChange& ActivityStateChange, const FVector StrikeLocation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientStopLaunchCodeTransmission();
    
    UFUNCTION(Client, Reliable)
    void ClientReceiveLaunchCodes(const uint8 LaunchCodeID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveLaunchCodeResponse(const ETransmitResponse Response);
    
};

