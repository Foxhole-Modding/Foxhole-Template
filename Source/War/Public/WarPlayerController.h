#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RegionConnectionInfo.h"
#include "EWorldConquestMapId.h"
#include "UObject/NoExportTypes.h"
#include "SpawnPoint.h"
#include "ETravelResult.h"
#include "WarPlayerController.generated.h"

class AWarBeaconClient;

UCLASS(Abstract, Blueprintable)
class WAR_API AWarPlayerController : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelRequestIsPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelRequestWasSuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelReservationIsPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTravelReservationIsComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQueuedViaBorderTravel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedToContinueTravelling;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWarBeaconClient* WarBeaconClient;
    
public:
    AWarPlayerController();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSignalAttemptServerTravel();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerQueueForDeployment(const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint, bool bIsRecovery);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerInitiateTravel();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGetTravelInfo(const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint, bool bIsRecovery);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerClientTravelLoadComplete();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SelectWarDrawDebugWorld();
    
    UFUNCTION()
    void EnableInputForThis(uint8 InputDisableReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTravelToWorldConquestMap(const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint);
    
    UFUNCTION(Client, Reliable)
    void ClientTravelSuccess(uint64 TravelId, FRegionConnectionInfo RegionConnectionInfo);
    
    UFUNCTION(Client, Reliable)
    void ClientTravelProgress(uint32 NumPlayersConnected, uint32 NumPlayersTotal);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTravelPending(int32 PendingTravelId, EWorldConquestMapId DestinationMapId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTravelFailure(ETravelResult Result, int32 PartySize);
    
public:
    UFUNCTION(Client, Reliable)
    void ClientTravelComplete(uint64 TravelId, float InvulnerabilityDuration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientTravelArrived(FTransform ReservationLocation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReceiveTravelInfo(const FRegionConnectionInfo TravelInfo, const EWorldConquestMapId TargetMapId, const FSpawnPoint TravelPoint, bool Success, bool bIsRecovery);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientQueueForTravel(EWorldConquestMapId DestinationMapId, FRegionConnectionInfo RegionConnectionInfo);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnServerTravelAllowed();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientExitRecoveryMode();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEnterRecoveryMode(float Duration);
    
};

