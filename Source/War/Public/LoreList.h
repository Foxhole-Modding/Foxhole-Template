#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "LoreData.h"
#include "LoreList.generated.h"

UCLASS(Blueprintable)
class WAR_API ALoreList : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FLoreData> LoreDataTable;
    
public:
    ALoreList();
};

