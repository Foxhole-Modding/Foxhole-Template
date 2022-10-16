#pragma once
#include "CoreMinimal.h"
#include "ReservableStructure.h"
#include "ResourceConverter.h"
#include "ConcreteMixer.generated.h"

class USkeletalMeshComponent;
class UStaticMesh;

UCLASS(Blueprintable)
class WAR_API AConcreteMixer : public AReservableStructure {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MeshComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* PackagedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FResourceConverter ResourceConverter;
    
public:
    AConcreteMixer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRefining() const;
    
};

