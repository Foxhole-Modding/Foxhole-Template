#pragma once
#include "CoreMinimal.h"
#include "ItemGroupRenderLayout.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ItemGroupRenderData.generated.h"

UCLASS(Blueprintable)
class WAR_API UItemGroupRenderData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FItemGroupRenderLayout> Layouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LayoutSize;
    
    UItemGroupRenderData();
};

