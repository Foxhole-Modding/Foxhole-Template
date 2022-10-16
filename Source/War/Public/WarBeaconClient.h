#pragma once
#include "CoreMinimal.h"
#include "BanReasonInfo.h"
#include "OnlineBeaconClient.h"
#include "WarBeaconJoinRequestData.h"
#include "EJoinWarResponse.h"
#include "WarBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class WAR_API AWarBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    AWarBeaconClient();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestQueueStatusUpdate();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerLeaveQueue();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerJoinQueue(FWarBeaconJoinRequestData JoinRequestData);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateQueueStatus(const int32 NumPlayersAhead);
    
    UFUNCTION(Client, Reliable)
    void ClientPlayerIsBannedResponse(const bool IsBanned, const int64 BanDurationTicks, const FBanReasonInfo& BanReasonInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnServerTravelling();
    
    UFUNCTION(Client, Reliable)
    void ClientJoinServer(const uint8 TeamId);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientJoinQueueResponse(const EJoinWarResponse JoinWarResponse);
    
};

