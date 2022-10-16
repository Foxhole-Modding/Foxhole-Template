#include "EffectSpawnerProxy.h"
#include "Net/UnrealNetwork.h"

void AEffectSpawnerProxy::OnRep_DestroyedVFX() {
}

void AEffectSpawnerProxy::OnRep_DestroyedSoundCue() {
}

void AEffectSpawnerProxy::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEffectSpawnerProxy, DestroyedVFX);
    DOREPLIFETIME(AEffectSpawnerProxy, DestroyedSoundCue);
}

AEffectSpawnerProxy::AEffectSpawnerProxy() {
    this->DestroyedVFX = NULL;
    this->DestroyedSoundCue = NULL;
}

