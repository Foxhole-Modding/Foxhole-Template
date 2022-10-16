#pragma once
#include "CoreMinimal.h"
#include "Wall.h"
#include "Rock.generated.h"

UCLASS(Abstract, Blueprintable)
class WAR_API ARock : public AWall {
    GENERATED_BODY()
public:
    ARock();
};

