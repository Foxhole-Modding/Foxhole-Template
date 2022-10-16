#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "EStructureProfileType.h"
#include "StructureProfileData.h"
#include "StructureProfileList.generated.h"

UCLASS(Blueprintable)
class WAR_API AStructureProfileList : public AInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EStructureProfileType, FStructureProfileData> StructureProfileMap;
    
public:
    AStructureProfileList();
};

