#pragma once
#include "CoreMinimal.h"
#include "ETechComponentID.h"
#include "DynamicOnResearchedDelegate.generated.h"

class UTechTreeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDynamicOnResearched, const UTechTreeComponent*, TechTreeComponent, const ETechComponentID, TechID);

