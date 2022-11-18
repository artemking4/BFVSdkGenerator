// Object: LevelData
// ClassId: 279
// RuntimeId: 19805
// TypeInfo: 0x0000000144E77D40
#include "../Entity/WorldData.h"
#include "../PathfindingShared/PathfindingBlobAsset.h"
#include "../GameShared/GameAISystem.h"
#include "../GameShared/AILevelData.h"
#include "../Global/Float32.h"
#include "../GameShared/LevelDescription.h"
#include "../Global/CString.h"
#include "../Audio/StreamPoolPreset.h"
#include "../Audio/VoiceOverSystemAsset.h"
#include "../Audio/VoiceOverLogicAsset.h"
#include "../Global/Boolean.h"
#include "../Render/EnlightenShaderDatabaseAsset.h"
#include "../Ant/AntProjectAsset.h"
#include "../Global/Int32.h"
#include "../Global/Uint32.h"
#include "../GameShared/CameraModeAsset.h"
#include "../GameShared/CameraTransition.h"
#include "../GameShared/LevelPreloadInfo.h"
#include "../GameShared/FaceAnimationWaveMappings.h"
#include "../GameShared/UnlockIdTable.h"

#pragma pack(push, 8)
namespace GameShared {
    class LevelData : public Entity::WorldData {
        PathfindingShared::PathfindingBlobAsset PathfindingBlobs; // 0x90
        GameShared::GameAISystem AISystem; // 0x98
        GameShared::AILevelData AILevelData; // 0xA0
        Float32 WorldSizeXZ; // 0xA8
        char pad_0xAC[0x4];
        GameShared::LevelDescription LevelDescription; // 0xB0
        CString GameConfigurationName; // 0xD8
        Float32 DefaultFOV; // 0xE0
        Float32 InfantryFOVMultiplier; // 0xE4
        Audio::StreamPoolPreset StreamPoolPreset; // 0xE8
        Audio::VoiceOverSystemAsset VoiceOverSystem; // 0xF0
        Array<Audio::VoiceOverLogicAsset> VoiceOverLogic; // 0xF8
        Float32 MaxVehicleHeight; // 0x100
        char pad_0x104[0x4];
        Render::EnlightenShaderDatabaseAsset EnlightenShaderDatabase; // 0x108
        Ant::AntProjectAsset AntProjectAsset; // 0x110
        CString AerialHeightmapData; // 0x118
        Int32 ReservedPositionedInstanceCount; // 0x120
        Int32 ReservedDistancedInstanceCount; // 0x124
        Uint32 FilterInAtIndex; // 0x128
        Uint32 FilterOutAtIndex; // 0x12C
        Array<GameShared::CameraModeAsset> CameraModes; // 0x130
        Array<GameShared::CameraTransition> CameraTransitions; // 0x138
        GameShared::LevelPreloadInfo PreloadInfo; // 0x140
        GameShared::FaceAnimationWaveMappings FaceAnimationWaveMappings; // 0x150
        Array<CString> AutoLoadBundles; // 0x158
        GameShared::UnlockIdTable UnlockIdTable; // 0x160
        Int32 WaitForInstallationGroupHash; // 0x168
        Boolean HugeBroadPhase; // 0x16C
        Boolean FreeStreamingEnable; // 0x16D
        Boolean UseControllableFiltering; // 0x16E
        Boolean AllowSublevelPinningDuringLevelReload; // 0x16F
        Boolean NewShaderDatabase; // 0x170
        Boolean OldShaderDatabase; // 0x171
        char pad_0x172[0x6];
    }; // 0x178
    static_assert(sizeof(LevelData) == 0x178);
}
#pragma pack(pop)