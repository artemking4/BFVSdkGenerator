// Object: RawFileDataAsset
// ClassId: 700
// RuntimeId: 63511
// TypeInfo: 0x0000000144E750C0
#include "../GameShared/RawFileAsset.h"
#include "../Global/Uint8.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace GameShared {
    class RawFileDataAsset : public GameShared::RawFileAsset {
        Array<Uint8> RawData; // 0x20
        Uint32 Size; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(RawFileDataAsset) == 0x30);
}
#pragma pack(pop)