#pragma once
#include "CoreMinimal.h"
#include "SimVehicle.h"
#include "ETrackGauge.h"
#include "TrainInfo.h"
#include "RepTrainMovement.h"
#include "RepRailwayMovement.h"
#include "RailParticleSystem.h"
#include "Engine/NetSerialization.h"
#include "RailVehicle.generated.h"

class UPrimitiveComponent;
class UCableComponent;
class URailCouplerUseComponent;
class UMaterialInterface;
class UAudioComponent;
class ARailwayTrack;
class ARailVehicle;

UCLASS(Blueprintable)
class WAR_API ARailVehicle : public ASimVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> CustomSweepComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNeedsSkelmeshTickForMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPowered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETrackGauge TrackGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTrainInfo TrainInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RailwayMovement, meta=(AllowPrivateAccess=true))
    FRepTrainMovement RepTrainMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URailCouplerUseComponent* FrontCoupler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URailCouplerUseComponent* RearCoupler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCableComponent* FrontCableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CouplerCableMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* IdleLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* BrakeLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* FrontClacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* RearClacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SavedFrontTrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SavedRearTrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float SavedFrontTrackAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SavedLinkedFrontCarName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRailParticleSystem> BrakingSystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRailParticleSystem> DrivingSystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARailwayTrack* LastFrontBogieTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARailwayTrack* LastRearBogieTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBoosting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BorderTravelOverrideExtent;
    
    ARailVehicle();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRequestTrainInfo();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRailMoveDual(float TimeStamp0, FVector_NetQuantize10 InAccel0, uint8 PendingFlags, uint32 View0, float Timestamp, FVector_NetQuantize10 InAccel, uint8 NewFlags, uint8 ClientRoll, uint32 View, ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ServerMovementMode);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRailMove(float Timestamp, FVector_NetQuantize10 InAccel, uint8 CompressedMoveFlags, uint8 ClientRoll, uint32 View, ARailwayTrack* ClientTrack, bool bClientTrackIsFront, float PackedClientDistance, uint8 ClientMovementMode);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RailwayMovement();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateTrainInfo(const TArray<ARailVehicle*>& RailVehicles);
    
    UFUNCTION(Client, Reliable)
    void ClientRailAdjustPosition(float Timestamp, uint8 ServerMovementMode, const TArray<FRepRailwayMovement>& NewReplicatedMovement);
    
};

