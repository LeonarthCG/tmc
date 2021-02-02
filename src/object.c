#include "global.h"
#include "entity.h"
#include "object.h"
//clang-format off

void (*const gObjectFunctions[])(Entity*) = {
    /*0x00*/ ItemOnGround,
    /*0x01*/ DeathFx,
    /*0x02*/ ItemForSale,
    /*0x03*/ Button,
    /*0x04*/ Object4,
    /*0x05*/ Pot,
    /*0x06*/ Object6,
    /*0x07*/ BlockPushed,
    /*0x08*/ LockedDoor,
    /*0x09*/ Object9,
    /*0x0a*/ ObjectA,
    /*0x0b*/ ObjectB,
    /*0x0c*/ ChestSpawner,
    /*0x0d*/ ObjectD,
    /*0x0e*/ ObjectE,
    /*0x0f*/ SpecialFx,
    /*0x10*/ Object10,
    /*0x11*/ Object11,
    /*0x12*/ Object12,
    /*0x13*/ Railtrack,
    /*0x14*/ LilypadLarge,
    /*0x15*/ Object15,
    /*0x16*/ FloatingPlatform,
    /*0x17*/ Object17,
    /*0x18*/ EvilSpirit,
    /*0x19*/ HouseDoorExterior,
    /*0x1a*/ Object1A,
    /*0x1b*/ GreatFairy,
    /*0x1c*/ Object1C,
    /*0x1d*/ Object1D,
    /*0x1e*/ Object1E,
    /*0x1f*/ Object1F,
    /*0x20*/ Object20,
    /*0x21*/ Object21,
    /*0x22*/ FigurineDevice,
    /*0x23*/ EyeSwitch,
    /*0x24*/ Object24,
    /*0x25*/ BigBarrel,
    /*0x26*/ Object26,
    /*0x27*/ PushableStatue,
    /*0x28*/ Object28,
    /*0x29*/ Object29,
    /*0x2a*/ Object2A,
    /*0x2b*/ Object2B,
    /*0x2c*/ Beanstalk,
    /*0x2d*/ Smoke,
    /*0x2e*/ PushableRock,
    /*0x2f*/ HittableLever,
    /*0x30*/ Object30,
    /*0x31*/ Object31,
    /*0x32*/ PullableMushroom,
    /*0x33*/ Bollard,
    /*0x34*/ WarpPoint,
    /*0x35*/ Object35,
    /*0x36*/ Object36,
    /*0x37*/ Object37,
    /*0x38*/ JarPortal,
    /*0x39*/ BossDoor,
    /*0x3a*/ Object3A,
    /*0x3b*/ MacroMushromStalks,
    /*0x3c*/ MacroPlayer,
    /*0x3d*/ Object3D,
    /*0x3e*/ Object3E,
    /*0x3f*/ GiantLeaf,
    /*0x40*/ Fairy,
    /*0x41*/ LadderUp,
    /*0x42*/ Object42,
    /*0x43*/ Object43,
    /*0x44*/ Object44,
    /*0x45*/ Object45,
    /*0x46*/ GiantBookLadder,
    /*0x47*/ HeartContainer,
    /*0x48*/ FileScreenObjects,
    /*0x49*/ Object49,
    /*0x4a*/ BackgroundCloud,
    /*0x4b*/ Object4B,
    /*0x4c*/ PushableFurniture,
    /*0x4d*/ Furniture,
    /*0x4e*/ MinishSizedEntrance,
    /*0x4f*/ Archway,
    /*0x50*/ GiantRock,
    /*0x51*/ Object51,
    /*0x52*/ Object52,
    /*0x53*/ Object53,
    /*0x54*/ PullableLever,
    /*0x55*/ Minecart,
    /*0x56*/ ThoughtBubble,
    /*0x57*/ HiddenLadderDown,
    /*0x58*/ GentariCurtain,
    /*0x59*/ LavaPlatform,
    /*0x5a*/ Object5A,
    /*0x5b*/ Object5B,
    /*0x5c*/ Mask,
    /*0x5d*/ HouseDoorInterior,
    /*0x5e*/ Whirlwind,
    /*0x5f*/ ObjectBlockingStairs,
    /*0x60*/ SwordsmanNewsletter,
    /*0x61*/ Object61,
    /*0x62*/ GiantTwig,
    /*0x63*/ Object63,
    /*0x64*/ Object64,
    /*0x65*/ LadderHoleInBookshelf,
    /*0x66*/ Object66,
    /*0x67*/ Object67,
    /*0x68*/ Object68,
    /*0x69*/ Object69,
    /*0x6a*/ Object6A,
    /*0x6b*/ CrenalBeanSprout,
    /*0x6c*/ MinecartDoor,
    /*0x6d*/ ObjectOnPillar,
    /*0x6e*/ MineralWaterSource,
    /*0x6f*/ MinishSizedArchway,
    /*0x70*/ Object70,
    /*0x71*/ PushableGrave,
    /*0x72*/ Object72,
    /*0x73*/ LilypadSmall,
    /*0x74*/ Object74,
    /*0x75*/ Object75,
    /*0x76*/ Object76,
    /*0x77*/ Bell,
    /*0x78*/ MacroDecoration,
    /*0x79*/ Object79,
    /*0x7a*/ Steam,
    /*0x7b*/ PushableLever,
    /*0x7c*/ MacroShoes,
    /*0x7d*/ ObjectOnSpinyBeetle,
    /*0x7e*/ Object7E,
    /*0x7f*/ PicoBloom,
    /*0x80*/ Object80,
    /*0x81*/ Object81,
    /*0x82*/ BigVortex,
    /*0x83*/ BigPushableLever,
    /*0x84*/ SmallIceBlock,
    /*0x85*/ BigIceBlock,
    /*0x86*/ Object86,
    /*0x87*/ Object87,
    /*0x88*/ MacroBook,
    /*0x89*/ Object89,
    /*0x8a*/ Object8A,
    /*0x8b*/ Object8B,
    /*0x8c*/ Book,
    /*0x8d*/ Fireplace,
    /*0x8e*/ Object8E,
    /*0x8f*/ FrozenWaterElement,
    /*0x90*/ Object90,
    /*0x91*/ Object91,
    /*0x92*/ BakerOven,
    /*0x93*/ Object93,
    /*0x94*/ WindTribeFlag,
    /*0x95*/ Bird,
    /*0x96*/ Object96,
    /*0x97*/ Object97,
    /*0x98*/ Object98,
    /*0x99*/ Object99,
    /*0x9a*/ MacroAcorn,
    /*0x9b*/ Object9B,
    /*0x9c*/ TreeHidingPortal,
    /*0x9d*/ LightableSwitch,
    /*0x9e*/ Object9E,
    /*0x9f*/ Fan,
    /*0xa0*/ ObjectA0,
    /*0xa1*/ PalaceArchway,
    /*0xa2*/ ObjectA2,
    /*0xa3*/ Cloud,
    /*0xa4*/ MinishLight,
    /*0xa5*/ ObjectA5,
    /*0xa6*/ ObjectA6,
    /*0xa7*/ ObjectA7,
    /*0xa8*/ ObjectA8,
    /*0xa9*/ ObjectA9,
    /*0xaa*/ WaterfallOpening,
    /*0xab*/ ObjectAB,
    /*0xac*/ FourElements,
    /*0xad*/ ObjectAD,
    /*0xae*/ FloatingBlock,
    /*0xaf*/ ObjectAF,
    /*0xb0*/ MetalDoor,
    /*0xb1*/ JailBars,
    /*0xb2*/ ObjectB2,
    /*0xb3*/ ObjectB3,
    /*0xb4*/ ObjectB4,
    /*0xb5*/ ObjectB5,
    /*0xb6*/ ObjectB6,
    /*0xb7*/ Well,
    /*0xb8*/ WindTribeTeleporter,
    /*0xb9*/ ObjectB9,
    /*0xba*/ ObjectBA,
    /*0xbb*/ Windcrest,
    /*0xbc*/ LitArea,
    /*0xbd*/ ObjectBD,
    /*0xbe*/ Pinwheel,
    /*0xbf*/ ObjectBF,
    /*0xc0*/ EnemyItem,
    /*0xc1*/ ObjectC1,
};
//clang-format on
