#include "SmokeGrenadeExplosionEffect.h"
#include "ObscuringSphereComponent.h"

ASmokeGrenadeExplosionEffect::ASmokeGrenadeExplosionEffect() {
    this->ObscuringSphere = CreateDefaultSubobject<UObscuringSphereComponent>(TEXT("ObscuringSphere"));
    this->MinimumVisibilityRadius = 100.00f;
    this->VisibilityRadiusCurve = NULL;
}

