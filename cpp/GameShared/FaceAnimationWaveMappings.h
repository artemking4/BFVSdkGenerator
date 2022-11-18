// Object: FaceAnimationWaveMappings
// ClassId: 1617
// RuntimeId: 29271
// TypeInfo: 0x0000000144E780C0
#include "../Core/DataContainer.h"
#include "../Ant/AntRef.h"
#include "../GameShared/FaceAnimationWaveMapping.h"

#pragma pack(push, 8)
namespace GameShared {
    class FaceAnimationWaveMappings : public Core::DataContainer {
        Ant::AntRef AntAsset; // 0x18
        Ant::AntRef OnStartedTalking; // 0x2C
        Array<GameShared::FaceAnimationWaveMapping> Mappings; // 0x40
    }; // 0x48
    static_assert(sizeof(FaceAnimationWaveMappings) == 0x48);
}
#pragma pack(pop)