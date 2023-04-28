#pragma once
#include "CoreMinimal.h"
#include "ERsHeroCollisionTweaks.generated.h"

UENUM(BlueprintType)
enum class ERsHeroCollisionTweaks : uint8 {
    Standard = 0x1,
    StandardForcePullingLevelObject,
    PhaseWalk,
    LedgeGrab,
    ClimbWall,
    ClimbCeiling,
    ClimbSurfaceTransition,
    NavigationTransition,
    ConstrainedJump,
    Combat_IgnorePawns,
    Combat_SpecialAttack,
    Combat_Standard,
    slide,
    Swim,
    DFXAirFall,
    BaseballSlide,
    ForceBarrier,
    SpeederBike,
    MonkeyBeam,
    Binoculars,
    Mounted,
    Glider,
    Mounted_Spamel,
    Mounted_Spamel_SharpTurn,
    Mounted_Spamel_Rear,
    Mounted_Bronto,
    BeamFall,
    DebugFly,
    NoCollision,
};

