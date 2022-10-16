#pragma once
#include "CoreMinimal.h"
#include "BuildableStructure.h"
#include "ReservableStructure.generated.h"

UCLASS(Blueprintable)
class WAR_API AReservableStructure : public ABuildableStructure {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bIsReservable: 1;
    
    AReservableStructure();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

