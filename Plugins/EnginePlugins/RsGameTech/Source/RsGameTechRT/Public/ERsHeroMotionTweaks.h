#pragma once
#include "CoreMinimal.h"
#include "ERsHeroMotionTweaks.generated.h"

UENUM(BlueprintType)
enum class ERsHeroMotionTweaks : uint8 {
    Default = 0x1,
    BasicGround,
    SlowWalk,
    SlowWalk150,
    SlowWalk150Transition,
    SlowWalk180Transition,
    SlowWalk80Transition,
    Dash180Transition,
    Walk,
    FastWalk,
    HubWalk,
    InteriorHubWalk,
    InteriorHubWalk_SeatingArea,
    InteriorHubWalk_CereBase,
    HubSprint,
    DialogueWalk,
    CameraZoomActiveState,
    CameraZoomActiveStateDialogueMode,
    ShipWalk,
    PerpWalk,
    SlowJog,
    PlayerIdle,
    PlayerIdleRootMotion,
    CSMove,
    Cine,
    CineNoMotion,
    PhysicsNoMotion,
    sprint,
    ForceSprint,
    PhaseDash,
    PhaseDashAirExit,
    PhaseDashWindGlobal,
    PhaseDashWindExit,
    BasicAir,
    JumpAscend,
    JumpDescend,
    SlideJumpDescend,
    DoubleJumpAscend,
    DoubleJumpDescend,
    DoubleJumpAngleLimit,
    AirHangTime,
    AirStrikeHang,
    StaffLauncher,
    GroundBackFlip,
    PhaseDashCurveControl,
    WallJumpAir,
    WallJumpFall,
    WallJumpRotation,
    WallHangJump_ForceClockwise,
    WallHangJump_ForceCounterClockwise,
    WallHangJump_ForceWallFacing,
    WallHangJumpAir,
    WallHangJumpFall,
    WallHangJumpFall_Away,
    WallHangJumpFall_Facing,
    WallPerch,
    WallPerchFacing,
    WallRun,
    WallRunExpired,
    WallRunFall,
    Glide,
    BalanceBeam,
    BalanceBeamDark,
    MonkeyBeam,
    MonkeyBeamDark,
    BeamSlow,
    BeamFall,
    BeamParallel,
    BeamTurn,
    BeamStop,
    BeamSwinging,
    BeamSwingingJump,
    slide,
    SlideFast,
    SlideSlow,
    SlideJumpAscend,
    SlideUphillTumble,
    SlideUphillWalkWrongWay,
    ZTarget,
    zTargetEvade,
    evadeBackflipEnter,
    evadeBackflipFall,
    zTargetFace,
    zTargetJump,
    bLock,
    BlockBreakoutSlowdown,
    BlockTwin,
    BlockStaff,
    BlockPirate,
    BlockHeavy,
    BlasterCharge,
    Swim,
    SwimVolumeOnSurface,
    SwimVolumeDiving,
    SwimBoost,
    SwimTurn,
    DiveToSwim,
    DiveAscendDescend,
    Telekinesis,
    ForceSlowAbilityGround,
    ForceSlowAbilityAir,
    ForceSlowAbilitySpecial,
    ForcePushAbilityGround,
    ForcePushAbilityAir,
    ForcePushAbilitySpecial,
    ForcePushCharge,
    ForceTelekinesisAbility,
    ForcePull_HoldingCharacters,
    ForcePull_ResistingCharacters,
    ForcePull_ResistingCharacters_Large,
    ForcePullAbility,
    ForcePullAbilityPlanted,
    ForcePullAbilityRopeGround,
    ForcePullAbilityRopeAir,
    Planted,
    JumpCancel,
    CombatAim,
    CombatNoAim,
    ForceAttackAim,
    IgnoreRootMotion,
    Reflect,
    LightsaberCharge,
    LightsaberNormals,
    LedgeGrab,
    LedgeVaultExit,
    climb,
    Zipline,
    ZiplineJump,
    ZiplineJumpAscend,
    ZiplineJumpDescend,
    ConstrainedJump,
    ConstrainedJumpClimbStickiness,
    DropOff,
    DropOff_NoRootMotion,
    DropOff_AllowRotation,
    BDGun,
    BDGun_AimMode,
    BinocularsPlayerIdle,
    Flashlight,
    RopeStrafe,
    RopeStrafeFaceRope,
    RopeShortcut,
    RopeSwing,
    RopeDrivenMotion,
    RopeJump,
    RopeJumpSlowdown,
    Tailwind,
    Headwind,
    WindAir,
    WindAirDropOff,
    Heal,
    FlinchReaction,
    AttackAir,
    FocusAir,
    DeathFromAbove,
    Debug,
    SyncAnim,
    SyncAnimRancor,
    SyncAnimNav,
    NavigationTransition,
    AM_NoRootMotion,
    AM_RootMotion,
    AM_RootMotion_ReleaseRotation,
    AM_DropOffEnabled,
    AM_WallInterac,
    AM_WallStick,
    SandWalk,
    Quicksand,
    QuickSandThighs,
    QuickSandChest,
    QuicksandStop,
    AnticipateQuicksandEntry,
    ConstrainedMovement,
    SpeederBike,
    GrappleDeploy,
    GrappleLaunch,
    ScriptedMovement,
    ScriptedMovementWithGround,
    HardLand,
    HardLandNoBack,
    RollLand,
    NoSteer,
    TrampolineJump,
    TrampolineJump_DrivenTrajectory,
    NOFRICTION,
    Vehicle,
    WallFriction,
    WallHang,
    WallHangSlide,
    WallHangForcedSlideDown,
    WallScurry,
    FilterWallHangTopology,
    PoisonFog,
    PoisonFogAir,
    ShrineEntranceWalk,
    TridentZiplineExit,
    Mounted,
    Mounted_Ground,
    Mounted_LowSpeed,
    Mounted_Lockdown,
    Mounted_SlowZone,
    Mounted_Idle,
    Mounted_Start,
    Mounted_Stop,
    Mounted_Land,
    Mounted_Turn,
    Mounted_Sprint,
    Mounted_Attack,
    Mounted_Block,
    Mounted_Drift,
    Mounted_Drift_Boost,
    Mounted_PreJump,
    Mounted_NoSprintJump,
    Mounted_Jump,
    Mounted_Fall,
    Mounted_Agitated,
    Mounted_Dismount,
    BeastTame,
    BeastTameFar,
    Glider,
    Glider_Air_New,
    Glider_Air,
    Glider_Air_Reverse,
    Glider_Air_Reverse_FastExit,
    Glider_TakeOff,
    Glider_Updraft,
    Glider_Downdraft,
    Glider_Downdraft_Exit,
    Glider_Headwind_Updraft,
    Glider_Headwind,
    Glider_Tailwind,
    Glider_Tailwind_SwampEntrance,
    Glider_Tailwind_StoneSpiresEntrance,
    Glider_Crosswind,
    Mounted_Spamel,
    Mounted_Spamel_Saved,
    Mounted_Spamel_Ground,
    Mounted_Spamel_Ground_Sprint,
    Mounted_Spamel_Air,
    Mounted_Spamel_Ground_Kick,
    Mounted_Spamel_Turn,
    Mounted_Spamel_Rear,
    Mounted_Spamel_Turn_Old,
    Mounted_Spamel_Sandstorm,
    Mounted_Spamel_SlowZone,
    MoonLaserDeath,
    HeavyPulley,
    LowGravity,
    HighGravity,
    ClampToTopology,
    ClampVelocityBounce,
};

