// Object: PA2BoneList
// ClassId: 4401
// RuntimeId: 34878
// TypeInfo: 0x0000000144E75E40
#include "../Core/DataContainer.h"
#include "../GameShared/PA2Bone.h"

#pragma pack(push, 8)
namespace GameShared {
    class PA2BoneList : public Core::DataContainer {
        Array<GameShared::PA2Bone> Bones; // 0x18
    }; // 0x20
    static_assert(sizeof(PA2BoneList) == 0x20);
}
#pragma pack(pop)