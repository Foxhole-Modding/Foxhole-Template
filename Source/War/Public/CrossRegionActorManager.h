#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CrossRegionActorManager.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Game)
class WAR_API UCrossRegionActorManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> AllRemoteActors;
    
public:
    UCrossRegionActorManager();
};

