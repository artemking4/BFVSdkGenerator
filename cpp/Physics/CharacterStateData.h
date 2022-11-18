// Object: CharacterStateData
// ClassId: 1374
// RuntimeId: 391
// TypeInfo: 0x0000000144F10480
#include "../Core/DataContainer.h"
#include "../Physics/CharacterStatePoseInfo.h"

#pragma pack(push, 8)
namespace Physics {
    class CharacterStateData : public Core::DataContainer {
        Array<Physics::CharacterStatePoseInfo> PoseInfo; // 0x18
    }; // 0x20
    static_assert(sizeof(CharacterStateData) == 0x20);
}
#pragma pack(pop)