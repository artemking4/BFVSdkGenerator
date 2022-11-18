// Object: ObjectsNodeData
// ClassId: 1058
// RuntimeId: 57113
// TypeInfo: 0x0000000144E03170
#include "../Audio/AudioGraphNodeData.h"
#include "../Audio/AudioGraphNodePort.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"
#include "../Audio/SoundBusPatchAsset.h"

#pragma pack(push, 8)
namespace Audio {
    class ObjectsNodeData : public Audio::AudioGraphNodeData {
        Audio::AudioGraphNodePort Enable; // 0x18
        Audio::AudioGraphNodePort Amplitude; // 0x20
        Audio::AudioGraphNodePort IsObjectAudioSupported; // 0x28
        Uint32 MaxObjectCount; // 0x30
        Float32 BedClampingDistance; // 0x34
        Audio::SoundBusPatchAsset DefaultObjectPatch; // 0x38
    }; // 0x40
    static_assert(sizeof(ObjectsNodeData) == 0x40);
}
#pragma pack(pop)