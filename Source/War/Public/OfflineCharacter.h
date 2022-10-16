#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "GameFramework/Actor.h"
#include "PersistentActor.h"
#include "EZombieType.h"
#include "OfflineCharacter.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class WAR_API AOfflineCharacter : public AActor, public IGenericTeamAgentInterface, public IPersistentActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* CharacterMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Hands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Legs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Helmet;
    
private:
    UPROPERTY(EditAnywhere, Replicated, SaveGame)
    uint8 TeamId;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame)
    uint8 VisualCustomizationMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    EZombieType ZombieType;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame)
    uint8 Temperature;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame)
    uint8 Muddyness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString OnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeathDuration;
    
public:
    AOfflineCharacter();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastApplyFatalHit();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPApplyFatalHit();
    
    
    // Fix for true pure virtual functions not being implemented
};

