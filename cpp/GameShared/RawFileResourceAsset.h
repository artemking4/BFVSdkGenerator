// Object: RawFileResourceAsset
// ClassId: 701
// RuntimeId: 59696
// TypeInfo: 0x0000000144E75140
#include "../GameShared/RawFileAsset.h"
#include "../Global/ResourceRef.h"

#pragma pack(push, 8)
namespace GameShared {
    class RawFileResourceAsset : public GameShared::RawFileAsset {
        ResourceRef Resource; // 0x20
    }; // 0x28
    static_assert(sizeof(RawFileResourceAsset) == 0x28);
}
#pragma pack(pop)