#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BuildSite.h"
#include "ModificationSlotMigration.h"
#include "UObject/NoExportTypes.h"
#include "ConnectorConfiguration.h"
#include "StructureBuildSite.generated.h"

class AStructure;
class UModificationSlotComponent;
class UBoxComponent;

UCLASS(Blueprintable)
class WAR_API AStructureBuildSite : public ABuildSite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FName StructureBeingBuiltCodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UModificationSlotComponent*> ModificationSlots;
    
    UPROPERTY(EditAnywhere, Replicated, SaveGame)
    uint32 ModificationMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool bBaseStructureHadPipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FModificationSlotMigration> ModificationSlotMigrations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FName> DisabledSockets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoxComponent* ObstructionCheckVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_IsUpgrade, meta=(AllowPrivateAccess=true))
    bool bIsUpgrade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSubclassOf<AStructure> BaseStructureClassToRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 BaseStructureHealth;
    
    UPROPERTY(EditAnywhere, SaveGame)
    uint8 BaseStructureTeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bHasSavedRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FQuat BaseStructureRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float DecayStartHours;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float DecayDurationHours;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString PreviousBuilderOnlineID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString PreviousBuilderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FConnectorConfiguration ConnectorConfiguration;
    
    AStructureBuildSite();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsUpgrade();
    
};

