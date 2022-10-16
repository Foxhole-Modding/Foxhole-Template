#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ReserveStockpileData.h"
#include "ReserveStockpileComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UReserveStockpileComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FReserveStockpileData> StockpileDataList;
    
    //UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSet<uint16> ActivePassCodes;
    
public:
    UReserveStockpileComponent();
};

