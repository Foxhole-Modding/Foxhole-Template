#pragma once
#include "CoreMinimal.h"
#include "TeamStructure.h"
#include "LiquidTank.h"
#include "FuelSilo.generated.h"

class UBuildSocketComponent;

UCLASS(Blueprintable)
class WAR_API AFuelSilo : public ATeamStructure {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* PipeInput0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBuildSocketComponent* PipeOutput0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_LiquidTank, meta=(AllowPrivateAccess=true))
    FLiquidTank LiquidTank;
    
public:
    AFuelSilo();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_LiquidTank();
    
};

