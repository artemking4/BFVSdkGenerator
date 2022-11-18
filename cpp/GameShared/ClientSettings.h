// Object: ClientSettings
// ClassId: 4973
// RuntimeId: 39941
// TypeInfo: 0x0000000144E82E40
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"
#include "../Global/Guid.h"

#pragma pack(push, 8)
namespace GameShared {
    class ClientSettings : public Core::SystemSettings {
        Array<Boolean> PadsRumbleEnabled; // 0x20
        Array<Uint32> PadsIndex; // 0x28
        Uint32 VrDeviceType; // 0x30
        Float32 JuiceDistanceThreshold; // 0x34
        Float32 JuiceTimeThreshold; // 0x38
        Float32 JuiceVehicleDistanceThreshold; // 0x3C
        Float32 JuiceVehicleTimeThreshold; // 0x40
        char pad_0x44[0x4];
        CString JuiceReportPerformanceCategory; // 0x48
        Float32 JuicePerformanceFpsHistogramTimeThreshold; // 0x50
        char pad_0x54[0x4];
        CString ScreenshotFilename; // 0x58
        CString ScreenshotSuffix; // 0x60
        Uint32 Team; // 0x68
        Int32 SpawnPointIndex; // 0x6C
        CString ServerIp; // 0x70
        CString SecondaryServerIp; // 0x78
        Float32 AimScale; // 0x80
        Float32 MouseSensitivityMin; // 0x84
        Float32 MouseSensitivitySliderRange; // 0x88
        Float32 MouseSensitivityFactor; // 0x8C
        Float32 MouseSensitivityPower; // 0x90
        Float32 LeftStickDeadZoneCenter; // 0x94
        Float32 LeftStickDeadZoneAxis; // 0x98
        Float32 LeftStickDeadZoneOffsetAxis; // 0x9C
        Float32 LeftStickMaxThreshold; // 0xA0
        Float32 RightStickDeadZoneCenter; // 0xA4
        Float32 RightStickDeadZoneAxis; // 0xA8
        Float32 RightStickDeadZoneOffsetAxis; // 0xAC
        Float32 RightStickMaxThreshold; // 0xB0
        Float32 LeftTriggerDeadZone; // 0xB4
        Float32 LeftTriggerMaxThreshold; // 0xB8
        Float32 RightTriggerDeadZone; // 0xBC
        Float32 RightTriggerMaxThreshold; // 0xC0
        char pad_0xC4[0x4];
        CString GamepadGuid; // 0xC8
        Uint32 ClientBulletsPerQuery; // 0xD0
        Float32 IncomingFrequency; // 0xD4
        Float32 IncomingHighFrequency; // 0xD8
        Int32 MinMPTickFrequency; // 0xDC
        Uint32 IncomingRate; // 0xE0
        Uint32 OutgoingRate; // 0xE4
        Uint32 IncomingHighFrequencyRate; // 0xE8
        Float32 LoadingTimeout; // 0xEC
        Float32 LoadedTimeout; // 0xF0
        Float32 IngameTimeout; // 0xF4
        CString InstancePath; // 0xF8
        Guid AudioSystemGuid; // 0x100
        Float32 WaitTimeBetweenSaves; // 0x110
        Boolean IsSpectator; // 0x114
        Boolean VisualFrameInterpolation; // 0x115
        Boolean UseTimeSinceInput; // 0x116
        Boolean AllowVideoRecording; // 0x117
        Boolean DrawStats; // 0x118
        Boolean DebrisClusterEnabled; // 0x119
        Boolean VegetationEnabled; // 0x11A
        Boolean ForceEnabled; // 0x11B
        Boolean WorldRenderEnabled; // 0x11C
        Boolean TerrainEnabled; // 0x11D
        Boolean WaterPhysicsEnabled; // 0x11E
        Boolean OvergrowthEnabled; // 0x11F
        Boolean EffectsEnabled; // 0x120
        Boolean EmittersEnabled; // 0x121
        Boolean AutoIncrementPadIndex; // 0x122
        Boolean JuicePlayerReportPositionEnabled; // 0x123
        Boolean JuiceReportPerformanceEnabled; // 0x124
        Boolean JuiceReportMemoryEnabled; // 0x125
        Boolean JuiceReportPerformanceFpsHistogramEnabled; // 0x126
        Boolean ExtendedJuiceLoggingEnabled; // 0x127
        Boolean JuiceReportPerformanceOnlyOnSimFrames; // 0x128
        Boolean LipSyncEnabled; // 0x129
        Boolean OnDamageSpottingEnabled; // 0x12A
        Boolean IgnoreClientFireRateMultiplier; // 0x12B
        Boolean PauseGameOnStartUp; // 0x12C
        Boolean SkipFastLevelLoad; // 0x12D
        Boolean InputEnable; // 0x12E
        Boolean ScreenshotToFile; // 0x12F
        Boolean LoadMenu; // 0x130
        Boolean DebugMenuOnLThumb; // 0x131
        Boolean InvertFreeCamera; // 0x132
        Boolean ScreenshotComparisonsEnable; // 0x133
        Boolean RenderTags; // 0x134
        Boolean InvertPitch; // 0x135
        Boolean InvertPadPcRightStick; // 0x136
        Boolean Scheme0FlipY; // 0x137
        Boolean Scheme1FlipY; // 0x138
        Boolean Scheme2FlipY; // 0x139
        Boolean InvertYaw; // 0x13A
        Boolean ConsoleInputEmulation; // 0x13B
        Boolean InputLayoutChangeOnlyForPad; // 0x13C
        Boolean SampleInputEveryVisualFrame; // 0x13D
        Boolean SampleVisualFrameInputPostFrame; // 0x13E
        Boolean HavokVisualDebugger; // 0x13F
        Boolean HavokCaptureToFile; // 0x140
        Boolean UseMouseAndKeyboardSystem; // 0x141
        Boolean UseGlobalGamePadInput; // 0x142
        Boolean UsePcGamePadInput; // 0x143
        Boolean AllowMultipleJoysticks; // 0x144
        Boolean XInputOverridesDirectInput; // 0x145
        Boolean ShowBuildId; // 0x146
        Boolean ExtractPersistenceInformation; // 0x147
        Boolean EnableRestTool; // 0x148
        Boolean LocalVehicleSimulationEnabled; // 0x149
        Boolean AsyncClientBulletEntity; // 0x14A
        Boolean AutoUnspawnDynamicObjects; // 0x14B
        Boolean QuitGameOnServerDisconnect; // 0x14C
        Boolean UseOldKillerCamera; // 0x14D
        Boolean LuaOptionSetEnable; // 0x14E
        Boolean DecoupledRenderUpdate; // 0x14F
        Boolean AllowDecoupledRenderUpdate; // 0x150
        Boolean UseCorrectionCache; // 0x151
        Boolean ClientOwnsPathfinding; // 0x152
        Boolean FastExit; // 0x153
        char pad_0x154[0x4];
    }; // 0x158
    static_assert(sizeof(ClientSettings) == 0x158);
}
#pragma pack(pop)