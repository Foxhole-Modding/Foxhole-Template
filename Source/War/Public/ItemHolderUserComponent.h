#pragma once
#include "CoreMinimal.h"
#include "ItemInstance.h"
#include "UserComponent.h"
#include "ItemHolderUserComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WAR_API UItemHolderUserComponent : public UUserComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Items, meta=(AllowPrivateAccess=true))
    TArray<FItemInstance> Items;
    
    UItemHolderUserComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Items();
    
};

