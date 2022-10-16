#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PersistentActor.h"
#include "EnvironmentModification.generated.h"

class AClientFoliageReplacement;
class UDecalComponent;

UCLASS(Blueprintable)
class WAR_API AEnvironmentModification : public AActor, public IPersistentActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<uint16> ImpactMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Seed, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_DevastationHeatmap)
    TArray<uint8> DevastationHeatmap;
    
    UPROPERTY(EditAnywhere)
    TArray<uint8> LastProcessedDevastationHeatmap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AClientFoliageReplacement*> Replacements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UDecalComponent*> Decals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstReplicationOfDevastationHeatmap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CreationTime, meta=(AllowPrivateAccess=true))
    float CreationTime;
    
public:
    AEnvironmentModification();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION()
    void ProcessDevastationHeatmapReplication(const TArray<uint8>& OldDevastationHeatmap);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Seed();
    
    UFUNCTION()
    void OnRep_DevastationHeatmap(const TArray<uint8>& OldDevastationHeatmap);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CreationTime(const float& OldCreationTime);
    
    
    // Fix for true pure virtual functions not being implemented
};

