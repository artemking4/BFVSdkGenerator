// Object: DebrisSystemAsset
// ClassId: 462
// RuntimeId: 14710
// TypeInfo: 0x0000000144DA4C20
#include "../Core/Asset.h"
#include "../Debris/DebrisHavokInfo.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Debris {
    class DebrisSystemAsset : public Core::Asset {
        Array<Debris::DebrisHavokInfo> HavokMeshes; // 0x20
        Int32 HavokMeshCount; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(DebrisSystemAsset) == 0x30);
}
#pragma pack(pop)