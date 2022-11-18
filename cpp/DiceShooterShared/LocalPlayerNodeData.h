// Object: LocalPlayerNodeData
// ClassId: 1029
// RuntimeId: 5571
// TypeInfo: 0x0000000144DE8990
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class LocalPlayerNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort PlayerId; // 0x18
        Audio::AudioGraphNodePort TeamId; // 0x20
        Audio::AudioGraphNodePort IsFirstPerson; // 0x28
        Audio::AudioGraphNodePort IsAlive; // 0x30
        Audio::AudioGraphNodePort IsManDown; // 0x38
        Audio::AudioGraphNodePort IsSinglePlayer; // 0x40
        Audio::AudioGraphNodePort IsAIPlayer; // 0x48
        Audio::AudioGraphNodePort IsInVehicle; // 0x50
        Audio::AudioGraphNodePort IsVehicleInteriorCam; // 0x58
        Audio::AudioGraphNodePort IsZooming; // 0x60
        Audio::AudioGraphNodePort Health; // 0x68
        Audio::AudioGraphNodePort VehicleHealth; // 0x70
        Audio::AudioGraphNodePort SoundMaterialId; // 0x78
        Audio::AudioGraphNodePort DistanceFromSound; // 0x80
        Audio::AudioGraphNodePort HeightDifference; // 0x88
        Audio::AudioGraphNodePort CharacterPose; // 0x90
        Boolean NormalizedHealth; // 0x98
        char pad_0x99[0x7];
    }; // 0xA0
    static_assert(sizeof(LocalPlayerNodeData) == 0xA0);
}
#pragma pack(pop)