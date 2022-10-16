#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "DamageProfiles.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class WAR_API ADamageProfiles : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DataTable;
    
public:
    ADamageProfiles();
};

