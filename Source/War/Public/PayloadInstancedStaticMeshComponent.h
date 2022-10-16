#pragma once
#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "PayloadMeshGroup.h"
#include "UObject/NoExportTypes.h"
#include "PayloadInstancedStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UPayloadInstancedStaticMeshComponent : public UInstancedStaticMeshComponent, public IPayloadMeshGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator MeshRotation;
    
    UPROPERTY(EditAnywhere)
    uint8 Rows;
    
    UPROPERTY(EditAnywhere)
    uint8 Columns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RowSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColumnSpacing;
    
    UPROPERTY(EditAnywhere)
    uint8 GroupIndex;
    
    UPayloadInstancedStaticMeshComponent();
    
    // Fix for true pure virtual functions not being implemented
};

