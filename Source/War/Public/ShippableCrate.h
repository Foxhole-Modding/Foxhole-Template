#pragma once
#include "CoreMinimal.h"
#include "ReservableStructure.h"
#include "ShippableCrate.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class WAR_API AShippableCrate : public AReservableStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ShippableMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FName StoredCodeName;
    
public:
    AShippableCrate();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

