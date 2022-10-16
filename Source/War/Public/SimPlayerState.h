#pragma once
#include "CoreMinimal.h"
#include "WarPlayerState.h"
#include "ERestrictedState.h"
#include "SimPlayerState.generated.h"

UCLASS(Blueprintable)
class WAR_API ASimPlayerState : public AWarPlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_TeamID)
    int8 TeamId;
    
    UPROPERTY(EditAnywhere, Replicated)
    int8 Level;
    
    UPROPERTY(EditAnywhere, Replicated)
    int8 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 XP;
    
    UPROPERTY(EditAnywhere, Replicated)
    int16 CP;
    
    UPROPERTY(EditAnywhere, Replicated)
    int8 CPToGive;
    
    UPROPERTY(EditAnywhere, Replicated)
    int64 TimeOfLastVoteKick;
    
    UPROPERTY(EditAnywhere, Replicated)
    uint16 DailyVoteKickCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RestrictedState, meta=(AllowPrivateAccess=true))
    ERestrictedState RestrictedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SquadId, meta=(AllowPrivateAccess=true))
    int32 SquadId;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_InactiveSquadIds)
    int32 InactiveSquadIds[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RegimentId, meta=(AllowPrivateAccess=true))
    int32 RegimentID;
    
    ASimPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamID();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SquadId(const int32 PreviousSquadId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RestrictedState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RegimentId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InactiveSquadIds();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSetIsGodMode(const bool bIsGodMode);
    
};

